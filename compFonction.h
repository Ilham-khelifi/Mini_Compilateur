#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
char NomEntite[20];
char CodeEntite[20];
char TypeEntite[20];
int TailleEntite;
} TypeTS;

typedef struct
	{
		char signFromatage;
		char idfs[20]; 
 
	} compatibilite;

extern int nb_ligne;
//initiation d'un tableau qui va contenir les elements de la table de symbole
TypeTS ts[100]; 

// un compteur global pour la table de symbole
int CpTabSym=0;

char* retournType(char idf[]);
//une fonctione recherche: pour chercher est ce que l'entité existe ou non déjà dans la table de symbole.
// i: l'entite existe dejà dans la table de symbole, et sa position est i, -1: l'entité n'existe pas dans la table de symbole.

int recherche(char entite[])
{
int i=0;
while(i<CpTabSym)
{
if (strcmp(entite,ts[i].NomEntite)==0) return i;
i++;
}

return -1;
}

//une fontion qui va insérer les entités de programme dans la table de symbole
void inserer(char entite[], char code[])
{

if ( recherche(entite)==-1)
{
strcpy(ts[CpTabSym].NomEntite,entite); 
strcpy(ts[CpTabSym].CodeEntite,code);
//printf("lentite est %s, sont type est %s %d\n",ts[CpTabSym].NomEntite,ts[CpTabSym].TypeEntite,CpTabSym);
CpTabSym++;
}
}

//une fonction pour afficher la table de symbole
void afficher ()
{
printf("\n/***************Table des symboles ******************/\n");
printf("__________________________________________________________________\n");
printf("\t| NomEntite |  CodeEntite  |  TypeEntite  |  TailleEntite   \n");
printf("__________________________________________________________________\n");
int i=0;
while(i<CpTabSym)
{

printf("\t|%10s |%12s  |%12s  |%10d   |\n",ts[i].NomEntite,ts[i].CodeEntite,ts[i].TypeEntite,ts[i].TailleEntite);

i++;
}
}


// fonction qui change le type d'une entité une fois il va être reconu dans la syntaxe 

void insererType(char entite[], char type[])
{

int posEntite=recherche(entite);
if (posEntite!=-1)
{ 

strcpy(ts[posEntite].TypeEntite,type);

//printf("lentite est %s, sont type est %s %d\n",ts[CpTabSym].NomEntite,ts[CpTabSym].TypeEntite,CpTabSym);

}
}
// fonction qui change le taille d'une entité une fois il va être reconu dans la syntaxe 
void insererTaille(char entite[], int x)
{

int posEntite=recherche(entite);
if (posEntite!=-1)
{ 

ts[posEntite].TailleEntite=x;

//printf("lentite est %s, sont type est %s %d\n",ts[CpTabSym].NomEntite,ts[CpTabSym].TypeEntite,CpTabSym);

}
}


//////////////////////////////////////////////////////
////Les routines sémantiques

// Fonction qui verifie la double declaration 
int doubleDeclaration (char entite[])
{
int posEntite=recherche(entite);

//printf ("\nposi %d\n",posEntite);
if (strcmp(ts[posEntite].TypeEntite,"")==0) return 1;  // j'ai pas trouvé le type associé à l'entité dans le table de symbole et donc elle est pas encore déclarée
else return 0; // le type de l'entité existe dejà dans la TS et donc c'est une double déclaration
}

// la fonction qui verifie si idf est une constante //

int VerifIdfConst(char entite[])
{
	int position;
	position =recherche(entite);
	if (position != -1) 
	{
		if (strcmp(ts[position].CodeEntite,"constante")==0){return 1;}//l'idf est un IDF CONSTANT
		else {return 0;}// l'idf n'est pas un IDF CONSTANT
	}
}
//la fonction qui verifie la taille du tableau//
int VerifierTailleTableau(char entite[], int taille)
{
    int position;
	position =recherche(entite);
	if (position != -1) 
	{
		if (ts[position].TailleEntite >= taille)
        {return 1;} //il n y a pas depassement de taille 
		else 
        {return 0;}//il y a un depassement de taille 
        
	}
}

// la fonction qui returne le nombre de signe de formatage //

int NbrFormat (char chaine [])
{
	int i =0;
	int longt = strlen(chaine);
	int cpt=0;
	for (i=0; i<longt; i++)
	{
		if (((chaine[i]=='%') && (chaine[i+1]=='d')) || ((chaine[i]=='%') && (chaine[i+1]=='s')) || ((chaine[i]=='%') && (chaine[i+1]=='f')))
		{
			cpt++;
		}
	}
	return cpt;
}

// la fonction qui verifie la compatibilité des types  //	

int CompType (char entite [], char type [])
{
	int position;
	position =recherche(entite);
	if (position != -1) 
	{
		if (strcmp(ts[position].TypeEntite,type)==0){return 1;}//le type est compatible
		else {return 0;}//le type n'est pas compatible
	}
}

// Fonction qui vérifie la compatibilité des types

int verifierCompatibiliteType( char id1[], char id2[]) {
    // Comparaison des types des deux identificateurs
    if (strcmp(ts[recherche(id1)].TypeEntite, ts[recherche(id2)].TypeEntite) == 0) {
        return 1; // Types compatibles
    } else {     
        return 0; // Types incompatibles
    }
}

//la fonction qui insere les signes de formatage d'une instruction dans un tableau//

void insererSignFormat(char chaine[], compatibilite tableau[]) {
    int i = 0, j = 0;
    int taille = strlen(chaine);

    for (i = 0; i < taille; i++) {
        if (chaine[i] == '%') {
            i++;
            switch (chaine[i]) {
                case 'd':
                    tableau[j].signFromatage = 'd';
                    break;
                case 'f':
                    tableau[j].signFromatage = 'f';
                    break;
                case 's':
                    tableau[j].signFromatage = 's';
                    break;
                default:
                    printf("Erreur sémantique: Signe de formatage inconnu '%c'\n", chaine[i]);
                    break;
            }
            j++;
        }
    }

}

//Vérification de compatibilité de format//

int verifierCompatibiliteFormat(compatibilite tableau[], int nbr) {
	
	int i;
    for (i = 0; i < nbr; i++) {
        switch (tableau[i].signFromatage) {
            case 'd': // %d
                if (strcmp(retournType(tableau[i].idfs), "int") != 0) {
                    return i + 1;
                }
                break;
            case 'f': // %f
                if (strcmp(retournType(tableau[i].idfs), "float") != 0) {
                    return i + 1;
                }
                break;
            case 's': // %s
                if (strcmp(retournType(tableau[i].idfs), "string") != 0) {
                    return i + 1;
                }
                break;
        }
    }
    return 0; // Tous les types sont compatibles
}

//Initialisation du tableau de compatibilité//

void initialiseTableau(compatibilite tableau[]) {
	int i;
    int taille = sizeof(tableau);
    for ( i = 0; i < taille; i++) { 
        tableau[i].signFromatage = ' ';
        strcpy(tableau[i].idfs, "");
    }
}

//la fonction qui retourne le type de iDF passe a la fonction//

char* retournType(char entite[]){
  int position=0;
  position = recherche(entite);
  if (position!=-1){
    return ts[position].TypeEntite;
  }
  return "";
}
