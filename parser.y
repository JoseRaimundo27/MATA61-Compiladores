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

%type <node> programa lista_declaracoes instrucao declaracao atribuicao chamada_revelio chamada_veritaserum instrucao_conjurar chamada_aparatar instrucao_feitico lista_params
%type <node> expressao
%type <node> vetor lista_elementos
%type <node> vetor_float lista_elementos_float
%type <node> lista_args

%left EQ NEQ
%left LT GT LE GE
%left PLUS MINUS
%left TIMES DIV


%%

programa:
    lista_declaracoes {
        root = create_node("program", 1, $1);
    }
;

lista_declaracoes:
    lista_declaracoes instrucao fim_stmt {
        Node* list = $1;
        list->children = realloc(list->children, sizeof(Node*) * (list->num_children + 1));
        list->children[list->num_children++] = $2;
        $$ = list;
    }
  | lista_declaracoes instrucao_conjurar {
        Node* list = $1;
        list->children = realloc(list->children, sizeof(Node*) * (list->num_children + 1));
        list->children[list->num_children++] = $2;
        $$ = list;
    }
  | lista_declaracoes instrucao_feitico {
        Node* list = $1;
        list->children = realloc(list->children, sizeof(Node*) * (list->num_children + 1));
        list->children[list->num_children++] = $2;
        $$ = list;
    }
  | instrucao fim_stmt {
        $$ = create_node("statement_list", 1, $1);
    }
  | instrucao_conjurar {
        $$ = create_node("statement_list", 1, $1);
    }
  | instrucao_feitico {
        $$ = create_node("statement_list", 1, $1);
    }
;

fim_stmt:
    ';'
;

instrucao:
    declaracao
  | atribuicao
  | chamada_revelio
  | chamada_veritaserum
  | chamada_aparatar
;

declaracao:
    ID ':' ACCIOINT ASSIGN expressao {
        $$ = create_node("declaration", 4, create_node($1, 0), create_node("accioint", 0), create_node("=", 0), $5);
    }
  | ID ':' ACCIOFLOAT ASSIGN expressao {
        $$ = create_node("declaration", 4, create_node($1, 0), create_node("acciofloat", 0), create_node("=", 0), $5);
    }
  | ID ':' RELICARIO ACCIOINT ASSIGN vetor {
        $$ = create_node("declaration", 4, create_node($1, 0), create_node("relicario accioint", 0), create_node("=", 0), $6);
    }
  | ID ':' RELICARIO ACCIOFLOAT ASSIGN vetor_float {
        $$ = create_node("declaration", 4, create_node($1, 0), create_node("relicario acciofloat", 0), create_node("=", 0), $6);
    }
;

atribuicao:
    ID ASSIGN expressao {
        $$ = create_node("instrucao", 1, create_node("=", 2, create_node($1, 0), $3));
    }
;

instrucao_conjurar:
    CONJURAR ID '(' lista_params ')' LUMOX lista_declaracoes NOX ';' {
        $$ = create_node("conjurar", 3, create_node($2, 0), $4, $7);
    }
  | CONJURAR ID '(' ')' LUMOX lista_declaracoes NOX ';' {
        $$ = create_node("conjurar", 3, create_node($2, 0), create_node("args", 0), $6);
    }
;

instrucao_feitico:
    FEITICO '(' expressao ')' LUMOX lista_declaracoes NOX ';' {
        $$ = create_node("feitico", 2, create_node("()", 1, $3), $6);
    }
;

chamada_aparatar:
    APARATAR ID '(' lista_args ')' {
        $$ = create_node("aparatar", 2, create_node($2, 0), $4);
    }
  | APARATAR ID '(' ')' {
        $$ = create_node("aparatar", 2, create_node($2, 0), create_node("args", 0));
    }
;

chamada_revelio:
    REVELIO '(' LITERAL ')' {
        $$ = create_node("revelio", 1, create_node($3, 0));
    }
  | REVELIO '(' LITERAL ',' lista_args ')' {
        $$ = create_node("revelio", 2, create_node($3, 0), $5);
    }
;

chamada_veritaserum:
    VERITASERUM '(' ID ')' {
        $$ = create_node("veritaserum", 1, create_node($3, 0));
    }
;

lista_params:
    ID {
        $$ = create_node("args", 1, create_node($1, 0));
    }
  | ID ',' lista_params {
        $$ = create_node("args", 2, create_node($1, 0), $3);
    }
;

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
  | '(' expressao ')' {
        $$ = create_node("()", 1, $2);
    }
      | expressao LT expressao {
        $$ = create_node("<", 2, $1, $3);
    }
  | expressao LE expressao {
        $$ = create_node("<=", 2, $1, $3);
    }
  | expressao GT expressao {
        $$ = create_node(">", 2, $1, $3);
    }
  | expressao GE expressao {
        $$ = create_node(">=", 2, $1, $3);
    }
  | expressao EQ expressao {
        $$ = create_node("==", 2, $1, $3);
    }
  | expressao NEQ expressao {
        $$ = create_node("!=", 2, $1, $3);
    }
;

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
