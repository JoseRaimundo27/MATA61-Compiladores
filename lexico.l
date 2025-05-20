%option noyywrap

%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SYMBOLS 100

char *symbol_table[MAX_SYMBOLS];
int symbol_count = 0;

int get_symbol_position(const char *id) {
    for (int i = 0; i < symbol_count; i++) {
        if (strcmp(symbol_table[i], id) == 0) {
            return i;
        }
    }
    symbol_table[symbol_count] = strdup(id);
    return symbol_count++;
}
%}

ID      [a-zA-Z_][a-zA-Z0-9_]*
NUM     [0-9]+
REAL    [0-9]+\.[0-9]+
WS      [ \t]+

%%

"int"           { printf("<int>\n"); }
"float"         { printf("<float>\n"); }
"if"            { printf("<if>\n"); }
"else"          { printf("<else>\n"); }
"while"         { printf("<while>\n"); }
"return"        { printf("<return>\n"); }
"function"      { printf("<function>\n"); }
"array"         { printf("<array>\n"); }

{REAL}          { printf("<real, %s>\n", yytext); }
{NUM}           { printf("<num, %s>\n", yytext); }

"+"             { printf("<+>\n"); }
"-"             { printf("<->\n"); }
"*"             { printf("<*>\n"); }
"/"             { printf("</>\n"); }
"=="            { printf("<==>\n"); }
"!="            { printf("<!=>\n"); }
"<"             { printf("<<>\n"); }
">"             { printf("<>>\n"); }
"="             { printf("<=\n"); }

"("             { printf("<(>\n"); }
")"             { printf("<)>\n"); }
"{"             { printf("<{>\n"); }
"}"             { printf("<}>\n"); }
","             { printf("<,>\n"); }
";"             { printf("<;>\n"); }

"//".*          { printf("<comentario>\n"); }
"/*"([^*]|\*+[^*/])*\*+"/" { printf("<comentario>\n"); }

{ID} {
    int pos = get_symbol_position(yytext);
    printf("<id, %d>\n", pos);
}

{WS}            { /* ignora espaço/tabulação */ }
\n              { /* ignora nova linha */ }
.               { printf("Token desconhecido: %s\n", yytext); }

%%

int main(int argc, char **argv) {
    yylex();

    // Mostra tabela de símbolos (opcional para debug)
    /*
    printf("\nTabela de Símbolos:\n");
    for (int i = 0; i < symbol_count; i++) {
        printf("[%d] %s\n", i, symbol_table[i]);
        free(symbol_table[i]);  // Libera memória
    }
    */

    return 0;
}
