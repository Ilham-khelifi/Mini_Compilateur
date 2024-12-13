%{
#include "syntaxique.tab.h" 
#include "compFonction.h"  
extern int nb_ligne;
extern YYSTYPE yylval; 

%}

lettre [a-zA-Z]
chiffre [0-9]
IDF {lettre}({lettre}|{chiffre}|[_])*
cst_int [-+]?{chiffre}+
cst_float [+-]?{chiffre}+\.{chiffre}+
cst_string \"[^\"]*\"
%%

program return mc_pgm;

int { yylval.string = strdup(yytext);
      return mc_int; }

float { yylval.string = strdup(yytext);
        return mc_float; }

string { yylval.string = strdup(yytext);
         return mc_string; }

CONST return mc_const;

for return mc_for;

begin return mc_begin;

end return mc_end;

In {return mc_in;}

Out {return mc_out;}

{IDF} {
    if (strlen(yytext) > 12) {
        printf("Erreur lexicale : Identificateur trop long à la ligne %d : %s\n", nb_ligne, yytext);
    } else if (strstr(yytext, "__")) {
        printf("Erreur lexicale : Identificateur contient '__' à la ligne %d : %s\n", nb_ligne, yytext);
    } else {
	    yylval.string = strdup(yytext);
        return idf;
    }
}

{cst_int} {
    yylval.entier = atoi(yytext);
    return cst_int;
}

{cst_string} {
    yylval.string = strdup(yytext);
    return cst_string;
}

{cst_float} {
    yylval.flt = atof(yytext);
    return cst_float;
}

\[ { return cr_ouv; }

\] { return cr_ferm; }

\, { return vg; }

\; { return pvg; }

\{ { return acc_ouv; }

\} { return acc_ferm; }

\( { return par_ouv; }

\) { return par_ferm; }

\= { return aff; }

\+ {return plus2; }

\++ { return incr; }

\< { return Infer; }

\- {return moins; }

\* {return mult; }

"/" { return div2; }

\<= {return InferEgal;}


##([^#]|\#[^#]|\n)*## {
    char* pgh = yytext;
    while (*pgh) {
        if (*pgh == '\n') nb_ligne++; // Incrémenter le compteur de lignes
        pgh++;
    }
    
}

[ \t] ;
\n { nb_ligne++; }

. {
    printf("Erreur lexicale à la ligne %d sur l'entité : %s\n", nb_ligne, yytext);
}
