%option noyywrap

%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "parser.tab.h"
#include "tree.h"


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

"accioint"      { return ACCIOINT; }
"acciofloat"    { return ACCIOFLOAT; }
"veritaserum"   { return VERITASERUM; }
"crucio"        { return CRUCIO; }
"conjurar"      { return CONJURAR; }
"aparatar"      { return APARATAR; }
"feitiço"       { return FEITICO; }
"relicario"     { return RELICARIO; }
"revelio"       { return REVELIO; }
"lumos"         { return LUMOX; }
"nox"           { return NOX; }

"=="            { return EQ; }
"!="            { return NEQ; }
"<="            { return LE; }
">="            { return GE; }
"<"             { return LT; }
">"             { return GT; }

"+"             { return PLUS; }
"-"             { return MINUS; }
"*"             { return TIMES; }
"/"             { return DIV; }
"="             { return ASSIGN; }
"=>"            { return ARROW; }

":"             { return ':'; }
","             { return ','; }
"("             { return '('; }
")"             { return ')'; }
"["             { return '['; }
"]"             { return ']'; }

{ID} {
    yylval.str = strdup(yytext);
    return ID;
}

{NUM} {
    yylval.num = atoi(yytext);
    return NUM;
}

{REAL} {
    yylval.fnum = atof(yytext);
    return REAL;
}


"~>".* {
    // ignora comentários mágicos
}

[ \t]+      { /* ignora espaços apenas */ }
\n          { return '\n'; } 

\"([^\\\"\n]*)\" {
    char* raw = strdup(yytext);
    raw[yyleng - 1] = '\0';           // remove aspa final
    yylval.str = strdup(raw + 1);     // remove aspa inicial
    free(raw);
    return LITERAL;
}

. {
    printf("Token desconhecido: %s\n", yytext);
}

%%
