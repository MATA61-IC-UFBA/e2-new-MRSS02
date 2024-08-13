/* recognize tokens for the calculator */

%option noyywrap nodefault yylineno
%{
#include "token.h"

%}

%%

\n { return 0; } 
[0-9]+ { printf("constante decimal: %s\n"); return 1; }
"+" { return 2; }
"-" { return 3; }
"*" { return 4; }
"/" { return 5; }
. { printf("%s - "); return 6; } 

%%
