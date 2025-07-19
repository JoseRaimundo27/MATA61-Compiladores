%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "tree.h"

extern int yylex();
void yyerror(const char *s);
Node* root;
%}

%code requires {
  #include "tree.h"
}

%union {
    char* str;
    int num;
    float fnum;
    Node* node;
}

%token <str> ID LITERAL
%token <num> NUM
%token <fnum> REAL

%token PLUS MINUS TIMES DIV ASSIGN EQ NEQ LT GT LE GE ARROW
%token LUMOX NOX
%token ACCIOINT ACCIOFLOAT VERITASERUM CRUCIO CONJURAR APARATAR FEITICO RELICARIO REVELIO

%type <node> programa lista_declaracoes declaracao
%type <node> expressao
%type <node> vetor lista_elementos
%type <node> vetor_float lista_elementos_float
%type <node> lista_args

%left PLUS MINUS
%left TIMES DIV

%%

/* ---------------------- Programa e Bloco ---------------------- */
programa:
    lista_declaracoes {
        root = create_node("program", 1, $1);
    }
    ;

lista_declaracoes:
    lista_declaracoes declaracao fim_stmt {
        $$ = create_node("statement_list", 2, $1, $2);
    }
  | declaracao fim_stmt {
        $$ = create_node("statement_list", 1, $1);
    }
  ;

fim_stmt:
    '\n'
  | /* vazio */  // permite que não tenha \n final
  ;


/* ---------------------- Declarações ---------------------- */
declaracao:
    ID ':' ACCIOINT ASSIGN expressao {
        Node* id_node = create_node($1, 0);
        Node* tipo_node = create_node("accioint", 0);
        $$ = create_node("declaration", 3, id_node, tipo_node, $5);
    }
  | ID ':' ACCIOFLOAT ASSIGN expressao {
        Node* id_node = create_node($1, 0);
        Node* tipo_node = create_node("acciofloat", 0);
        $$ = create_node("declaration", 3, id_node, tipo_node, $5);
    }
  | ID ':' RELICARIO ACCIOINT ASSIGN vetor {
        Node* id_node = create_node($1, 0);
        Node* tipo_node = create_node("relicario accioint", 0);
        $$ = create_node("declaration", 3, id_node, tipo_node, $6);
    }
  | ID ':' RELICARIO ACCIOFLOAT ASSIGN vetor_float {
        Node* id_node = create_node($1, 0);
        Node* tipo_node = create_node("relicario acciofloat", 0);
        $$ = create_node("declaration", 3, id_node, tipo_node, $6);
    }
  | ID ASSIGN expressao {
        Node* id_node = create_node($1, 0);
        $$ = create_node("assignment", 2, id_node, $3);
    }
  | REVELIO '(' LITERAL ')' {
        Node* msg_node = create_node($3, 0);
        $$ = create_node("revelio", 1, msg_node);
    }
  | REVELIO '(' LITERAL ',' lista_args ')' {
        Node* msg_node = create_node($3, 0);
        $$ = create_node("revelio", 2, msg_node, $5);
    }
  ;

/* ---------------------- Expressões ---------------------- */
expressao:
    NUM {
        char buffer[64];
        sprintf(buffer, "NUM: %d", $1);
        $$ = create_node(buffer, 0);
    }
  | REAL {
        char buffer[64];
        sprintf(buffer, "REAL: %f", $1);
        $$ = create_node(buffer, 0);
    }
  | LITERAL {
        char buffer[256];
        sprintf(buffer, "\"%s\"", $1);
        $$ = create_node(buffer, 0);
    }
  | ID {
        $$ = create_node($1, 0);
    }
  | expressao PLUS expressao {
        $$ = create_node("+", 2, $1, $3);
    }
  | expressao MINUS expressao {
        $$ = create_node("-", 2, $1, $3);
    }
  | expressao TIMES expressao {
        $$ = create_node("*", 2, $1, $3);
    }
  | expressao DIV expressao {
        $$ = create_node("/", 2, $1, $3);
    }
  ;

/* ---------------------- Vetores ---------------------- */
vetor:
    '[' lista_elementos ']' {
        $$ = create_node("vetor", 1, $2);
    }
    ;

lista_elementos:
    NUM {
        char buffer[64];
        sprintf(buffer, "NUM: %d", $1);
        $$ = create_node("elementos", 1, create_node(buffer, 0));
    }
  | lista_elementos ',' NUM {
        char buffer[64];
        sprintf(buffer, "NUM: %d", $3);
        Node* num_node = create_node(buffer, 0);
        $$ = create_node("elementos", 2, $1, num_node);
    }
  ;

vetor_float:
    '[' lista_elementos_float ']' {
        $$ = create_node("vetor", 1, $2);
    }
    ;

lista_elementos_float:
    REAL {
        char buffer[64];
        sprintf(buffer, "REAL: %f", $1);
        $$ = create_node("elementos", 1, create_node(buffer, 0));
    }
  | lista_elementos_float ',' REAL {
        char buffer[64];
        sprintf(buffer, "REAL: %f", $3);
        Node* real_node = create_node(buffer, 0);
        $$ = create_node("elementos", 2, $1, real_node);
    }
  ;

/* ---------------------- Lista de argumentos para revelio ---------------------- */
lista_args:
    expressao {
        $$ = create_node("args", 1, $1);
    }
  | expressao ',' lista_args {
        $$ = create_node("args", 2, $1, $3);
    }
  ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Erro sintático: %s\n", s);
}

int main() {
    if (yyparse() == 0) {
        print_tree(root, 0);
    }
    return 0;
}
