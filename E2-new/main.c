#include <stdio.h>
#include "token.h"

extern int yylex();
extern char* yytext; 

int main () {

    scanf("%s", yytext); // lê a linha a ser analizada pelo analizador léxico

    token_t token = NUMBER; // define o token como NUMBER como um placeholder
    while (token != EOL) { // roda enquanto não houver fim de linha 

        token = yylex(); // chama yylex enquanto não houver quebra de linha
        if (token >= 2 && token <= 5) { // se a token for um caractere de operação
            printf("constante decimal: %s\n código do token: %d\n", yytext, token); // printa o código do token 
        } else if (token == 6) { // caso inválida
            printf("token inválida\n"); // printa a invalidez
        }
    } 
    printf("\n"); // quebra a linha após o término
    return 0; // retorna sem erros
}
