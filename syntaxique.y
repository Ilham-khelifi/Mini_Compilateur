%{  
int nb_ligne=1;
char sauvType[30];
char sauvOpr[20];
int sauvConstInt;
float sauvConstReal;
int NbrIdf =0;
typedef struct
	{
		char signFromatage;
		char idfs[20]; 
 
	} compatibilite;

compatibilite tableau [20];
%}

%union{
int entier;
float flt;	
char character;
char* string;
}

%token mc_pgm <string>mc_int mc_float mc_string mc_const mc_for mc_begin mc_end mc_in mc_out <string>idf <entier>cst_int <flt>cst_float <string>cst_string cr_ouv cr_ferm vg pvg acc_ouv acc_ferm par_ouv par_ferm aff plus2 incr Infer moins mult div2 InferEgal
%start S
%%
S: mc_pgm idf acc_ouv Corps acc_ferm 
   {
        inserer($2, "idf");  
        printf("Syntaxe correcte\n");
        YYACCEPT;  
    }
;

Corps : Inst_Dec Corps
       |
;
Inst_Dec: Dec
		 |List_inst
         
;

Dec: TYPE mc_const Liste_idf_cst pvg
     |TYPE Liste_idfs pvg
     
;
TYPE: mc_int {strcpy(sauvType, $1);}
      |mc_float {strcpy(sauvType, $1);}
	  |mc_string {strcpy(sauvType, $1);}
	  
;

Liste_idfs: idf vg Liste_idfs {
                                if (doubleDeclaration($1) == 1) {
								inserer($1, "idf");
								insererType($1, sauvType);
								insererTaille($1, 1);
								}
                                else {printf("erreur semantique: double declaration de %s a la ligne %d \n",$1, nb_ligne);}
							   }
            |idf               {
		                        if (doubleDeclaration($1) == 1) {
		                        inserer($1, "idf");
								insererType($1, sauvType);
								insererTaille($1, 1);
								}
                                else {printf("erreur semantique: double declaration de %s a la ligne %d \n",$1, nb_ligne);}
							   }
	        | idf cr_ouv cst_int cr_ferm vg Liste_idfs
		                      {
			                   if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
			                   if (doubleDeclaration($1) == 1) {inserer($1, "idf_tableau"); insererType($1,sauvType);}
			                   else {printf("Erreur semantique 'double declaration' a la ligne %d, la variable %s est deja declaree \n", nb_ligne, $1);}			
		                       } 
		                       | idf cr_ouv cst_int cr_ferm
		                       {
			                    if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
			                    if (doubleDeclaration($1) == 1) {inserer($1, "idf_tableau");insererType($1,sauvType); insererTaille($1, $3);}
			                    else {printf("Erreur semantique 'double declaration' a la ligne %d, la variable %s est deja declaree \n", nb_ligne, $1);}
		                       } 
;

Liste_idf_cst:idf aff cst_int vg Liste_idf_cst {if (doubleDeclaration($1)==1) {inserer($1, "constante");insererType($1,sauvType);insererTaille($1, 1);}
					                           else {printf("Erreur semantique 'double declaration' a la ligne %d, la variable %s est deja declaree \n", nb_ligne, $1);}
					                            if (CompType($1,"int")==0) {printf("Erreur semantique a la	 ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				                               }
				|idf aff cst_string vg Liste_idf_cst {if (doubleDeclaration($1)==1) {inserer($1, "constante");insererType($1,sauvType);insererTaille($1, 1);}
					                           else {printf("Erreur semantique 'double declaration' a la ligne %d, la variable %s est deja declaree \n", nb_ligne, $1);}
					                            if (CompType($1,"string")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				                               }
				|idf aff cst_float vg Liste_idf_cst {if (doubleDeclaration($1)==1) {inserer($1, "constante");insererType($1,sauvType);insererTaille($1, 1);}
					                           else {printf("Erreur semantique 'double declaration' a la ligne %d, la variable %s est deja declaree \n", nb_ligne, $1);}
					                            if (CompType($1,"float")==0) {printf("Erreur semantique a la	 ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				                               }	
				| idf aff cst_int
			                                    {
					                             if (doubleDeclaration($1)==1) {inserer($1, "constante");insererType($1,sauvType);insererTaille($1, 1);}
				                                 else {printf("Erreur semantique 'double declaration' a la ligne %d, la variable %s est deja declaree \n", nb_ligne, $1);}
					                             if (CompType($1,"int")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
												}	
				| idf aff cst_string
			                                    {
					                             if (doubleDeclaration($1)==1) {inserer($1, "constante");insererType($1,sauvType);insererTaille($1, 1);}
				                                 else {printf("Erreur semantique 'double declaration' a la ligne %d, la variable %s est deja declaree \n", nb_ligne, $1);}
					                             if (CompType($1,"string")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
												}
                | idf aff cst_float
			                                    {
					                             if (doubleDeclaration($1)==1) {inserer($1, "constante");insererType($1,sauvType);insererTaille($1, 1);}
				                                 else {printf("Erreur semantique 'double declaration' a la ligne %d, la variable %s est deja declaree \n", nb_ligne, $1);}
					                             if (CompType($1,"float")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
												}			
;
List_inst: Inst List_inst
		|
;
Inst: InstFor
	  | InstAff
	  | Lecture
	  | Inst_ecriture
	  |
;

InstFor: mc_for par_ouv Init pvg Cond pvg Incr par_ferm mc_begin List_inst mc_end
;

Init: idf aff cst_int
;

Cond: idf Infer cst_int
      |idf InferEgal cst_int 
;

Incr: idf incr
;

InstAff:idf aff cst_string pvg
			{
				if (CompType($1,"string")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				if (VerifIdfConst($1)==1){printf("Erreur semantique a la ligne  %d : la variable %s est une constante, affectation impossible\n",nb_ligne,$1);}
				if (recherche($1)==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
			}
		| idf aff InstArith pvg
			{
				if ((CompType($1,"int")==0) && (CompType($1,"float")==0)) //we can't affect an expression to an id if it's not float or int
				{printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				if (VerifIdfConst($1)==1){printf("Erreur semantique a la ligne  %d : la variable %s est une constante, affectation impossible\n",nb_ligne,$1);}
				if (recherche($1)==-1){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
			}
		| idf cr_ouv idf cr_ferm aff cst_string pvg
			{
				if (CompType($1,"string")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				if (CompType($3,"int")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				if (VerifIdfConst($1)==1){printf("Erreur semantique a la ligne  %d : la variable %s est une constante, affectation impossible\n",nb_ligne,$1);}
				if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if (recherche($1)==-1){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
				if (recherche($3)==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$3);}			
			
			}
		| idf cr_ouv idf cr_ferm aff InstArith pvg
			{
				if ((CompType($1,"int")==0)&&(CompType($1,"float")==0)) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				if (CompType($3,"int")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				if (VerifIdfConst($1)==1){printf("Erreur semantique a la ligne  %d : la variable %s est une constante, affectation impossible\n",nb_ligne,$1);}
				if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if (recherche($1)==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
				if (recherche($3)==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$3);}			

			}
		| idf cr_ouv cst_int cr_ferm aff InstArith pvg
				{
				if ((CompType($1,"int")==0)&&(CompType($1,"float")==0))
				 {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				if (VerifIdfConst($1)==1){printf("Erreur semantique a la ligne  %d : la variable %s est une constante, affectation impossible\n",nb_ligne,$1);}
				if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if(VerifierTailleTableau($1, $3) == 0){printf("Erreur semantique a la ligne  %d : depassement de la taille du tableau\n",nb_ligne);}
				if (recherche($1)==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
			} 
		| idf cr_ouv cst_int cr_ferm aff cst_string  pvg
				{
				if (CompType($1,"string")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				if (VerifIdfConst($1)==1){printf("Erreur semantique a la ligne  %d : la variable %s est une constante, affectation impossible\n",nb_ligne,$1);}
				if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if(VerifierTailleTableau($1, $3) == 0){printf("Erreur semantique a la ligne  %d : depassement de la taille du tableau\n",nb_ligne);}
				if (recherche($1)==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
			} 
		|idf aff idf  
		    {
				if (verifierCompatibiliteType($1,$3)==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				if (VerifIdfConst($1)==1){printf("Erreur semantique a la ligne  %d : la variable %s est une constante, affectation impossible\n",nb_ligne,$1);}
				if (VerifIdfConst($3)==1){printf("Erreur semantique a la ligne  %d : la variable %s est une constante, affectation impossible\n",nb_ligne,$3);}
				if (recherche($1)==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
			    if(VerifierTailleTableau($1, $3) == 0){printf("Erreur semantique a la ligne  %d : depassement de la taille du tableau\n",nb_ligne);}
				if (recherche($3)==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$3);}
			}
;

InstArith:OPERANDE OPERATEUR OPERANDE
    {
		if((strcmp(sauvOpr,"/")==0)&& sauvConstInt==0)
        {printf("Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne);
		 sauvConstInt=-1;}
		else if ((strcmp(sauvOpr,"/")==0)&& sauvConstReal==0) {printf(" Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); sauvConstReal=-1.0;}
	}
					
	|OPERANDE OPERATEUR OPERANDE OPERATEUR InstArith
	{
		if((strcmp(sauvOpr,"/")==0)&& sauvConstInt==0)
        {printf("Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); sauvConstInt=-1;}
		else if ((strcmp(sauvOpr,"/")==0)&& sauvConstReal==0) {printf(" Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); sauvConstReal=-1.0;}
	}	
	|OPERANDE
;

OPERATEUR: plus2
		{
			strcpy(sauvOpr,"+");
		}
		| moins
		{
			strcpy(sauvOpr,"-");
		}
		| div2
		{
			strcpy(sauvOpr,"/");
		}
		| mult
		{
			strcpy(sauvOpr,"*");
		}
;
OPERANDE: idf
			{
			if (recherche($1)==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
			}
		| idf cr_ouv cst_int cr_ferm 
				{
				if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if (recherche($1)==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
				if(VerifierTailleTableau($1, $3) == 0){printf("Erreur semantique a la ligne  %d : depassement de la taille du tableau\n",nb_ligne);}
			    } 	
		| idf cr_ouv idf cr_ferm
				{
			    if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if (recherche($3)==-1){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$3);}			
				if (recherche($1)==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}			
	 			if(VerifierTailleTableau($1, $3) == 0){printf("Erreur semantique a la ligne  %d : depassement de la taille du tableau\n",nb_ligne);}
				} 
		| cst_int 
		{    
			sauvConstInt=$1;           
		}  
		| cst_float
		{    
			sauvConstReal=$1;           
		}  
		 
;

Lecture: mc_in par_ouv cst_string vg idf_lecture par_ferm pvg
  {
    // Vérification du nombre de variables et des signes de formatage
    if (NbrIdf != NbrFormat($3)) {
        printf("Erreur semantique a la ligne %d : Le nombre de signes de formatage n'est pas egal au nombre de variables.\n", nb_ligne);
    } else {
        insererSignFormat($3, tableau);
        if (verifierCompatibiliteFormat(tableau, NbrIdf) != 0) {
            printf("Erreur semantique a la ligne %d : Incompatibilite de type .\n", nb_ligne);
        }
        initialiseTableau(tableau);
    }
    NbrIdf = 0; // Réinitialisation du compteur
}  
;

idf_lecture:idf
			{strcpy(tableau[NbrIdf].idfs, $1);
			NbrIdf++;
				if(recherche($1)==-1){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
			}
		|idf cr_ouv idf cr_ferm
			{strcpy(tableau[NbrIdf].idfs, $1);
			NbrIdf++;
				if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if(recherche($1)==-1){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
				if(recherche($3)==-1){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$3);}
			}		
		|idf cr_ouv cst_int cr_ferm
			{strcpy(tableau[NbrIdf].idfs, $1);
			NbrIdf++;
				if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);	
				if(recherche($1)==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
			}
;

Inst_ecriture: EcritureFormat
		      |Ecriture
;
EcritureFormat: mc_out par_ouv cst_string vg idf_ecriture par_ferm pvg
    {
    // Vérification du nombre de variables et des signes de formatage
    if (NbrIdf != NbrFormat($3)) {
        printf("Erreur semantique a la ligne %d : Le nombre de signes de formatage n'est pas egal au nombre de variables.\n", nb_ligne);
    } else {
        insererSignFormat($3, tableau);
        if (verifierCompatibiliteFormat(tableau, NbrIdf) != 0) {
            printf("Erreur semantique a la ligne %d : INCOMPATIBILITE de type avec la variable numero %d dans l'instruction Ecriture.\n", nb_ligne, verifierCompatibiliteFormat(tableau, NbrIdf));
        }
        initialiseTableau(tableau);
    }
    NbrIdf = 0; // Réinitialisation du compteur
}
;

idf_ecriture:idf vg idf_ecriture
            {strcpy(tableau[NbrIdf].idfs, $1);
			NbrIdf++;
				if (recherche($1)==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
			}
			|idf
			{strcpy(tableau[NbrIdf].idfs, $1);
			NbrIdf++;
				if (recherche($1)==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
			}
			|idf cr_ouv idf cr_ferm
			{strcpy(tableau[NbrIdf].idfs, $1);
			NbrIdf++;
				if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if(recherche($1)==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
				if(recherche($3)==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$3);}
			}		
			|idf cr_ouv cst_int cr_ferm
			{strcpy(tableau[NbrIdf].idfs, $1);
			NbrIdf++;
				if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);	
				if(recherche($1)==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
			}
			|idf cr_ouv idf cr_ferm vg idf_ecriture
			{strcpy(tableau[NbrIdf].idfs, $1);
			NbrIdf++;
				if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if(recherche($1)==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
				if(recherche($3)==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$3);}
			}		
			|idf cr_ouv cst_int cr_ferm vg idf_ecriture
			{strcpy(tableau[NbrIdf].idfs, $1);
			NbrIdf++;
				if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if(recherche($1)==-1 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
			}
;
Ecriture : mc_out  par_ouv cst_string par_ferm pvg
			{
				if (NbrIdf != NbrFormat($3))
			{
				printf("Erreur semantique a la ligne %d : Le nombre de signes de formatages n'est pas egal au nombre de variables\n", nb_ligne);
			}
			}
;
%%
main () 
{
yyparse();
afficher();
}
yywrap()
{}

int yyerror(char * msg)

{
printf("erreur syntaxique sur la ligne %d\n",nb_ligne);
}

