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
%token <str> ACCIOINT ACCIOFLOAT VERITASERUM CRUCIO CONJURAR APARATAR FEITICO RELICARIO REVELIO

%type <node> programa lista_declaracoes instrucao

%type <node> declaracao atribuicao

%type <node> instrucao_conjurar instrucao_feitico
%type <node> chamada_aparatar chamada_revelio chamada_veritaserum

%type <node> expressao

%type <node> vetor lista_elementos
%type <node> vetor_float lista_elementos_float

%type <node> lista_params lista_args


%left EQ NEQ
%left LT GT LE GE
%left PLUS MINUS
%left TIMES DIV

%%

programa:
    lista_declaracoes {
        root = create_node("program", 1, $1);
    }

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
    Node* id_node = create_node("identifier: ", 1, create_node($1, 0));
    Node* type_node = create_node("type: ", 1, create_node($3, 0));
    Node* colon = create_node(":", 2, id_node, type_node);
    Node* assign = create_node("=", 1, $5);
    $$ = create_node("declaration", 2, colon, assign);}
	| ID ':' ACCIOFLOAT ASSIGN expressao {
    Node* id_node = create_node("identifier: ", 1, create_node($1, 0));
    Node* type_node = create_node("type: ", 1, create_node($3, 0));
    Node* colon = create_node(":", 2, id_node, type_node);
    Node* assign = create_node("=", 1, $5);
    $$ = create_node("declaration", 2, colon, assign);}
  | ID ':' RELICARIO ACCIOINT ASSIGN vetor {
    Node* id_node = create_node("identifier:", 1, create_node($1, 0));
    Node* relic_node = create_node("relicario", 1, create_node("accioint", 0));
		Node* type_node = create_node("type:", 1, relic_node);
    Node* colon = create_node(":", 2, id_node, type_node);
    Node* assign = create_node("=", 1, $6);
    $$ = create_node("declaration", 2, colon, assign);}
  | ID ':' RELICARIO ACCIOFLOAT ASSIGN vetor_float {
    Node* id_node = create_node("identifier:", 1, create_node($1, 0));
  	Node* relic_node = create_node("relicario", 1, create_node("acciofloat", 0));
		Node* type_node = create_node("type:", 1, relic_node);
    Node* colon = create_node(":", 2, id_node, type_node);
    Node* assign = create_node("=", 1, $6);
    $$ = create_node("declaration", 2, colon, assign);}

atribuicao:
    ID ASSIGN expressao {
      Node* id_node = create_node("identifier:", 1, create_node($1, 0));
    	Node* assign = create_node("=", 2, id_node, $3);
    	$$ = create_node("instrucao", 1, assign);
    }

instrucao_conjurar:
    CONJURAR ID '(' lista_params ')' LUMOX lista_declaracoes NOX ';' {
        Node* id_node = create_node("identifier:", 1, create_node($2, 0));
        Node* args_node = $4;
        Node* bloco_node = create_node("bloco", 1, $7);
        $$ = create_node("conjurar", 3, id_node, args_node, bloco_node);}
  | CONJURAR ID '(' ')' LUMOX lista_declaracoes NOX ';' {
        Node* id_node = create_node("identifier:", 1, create_node($2, 0));
        Node* args_node = create_node("args", 0);  // vazio
        Node* bloco_node = create_node("bloco", 1, $6);
        $$ = create_node("conjurar", 3, id_node, args_node, bloco_node);}
instrucao_feitico:
    FEITICO '(' expressao ')' LUMOX lista_declaracoes NOX ';' {
        Node* expressao_node = create_node("()", 1, $3);
        Node* bloco_node = create_node("bloco", 1, $6);
        $$ = create_node("feitico", 2, expressao_node, bloco_node);}

chamada_aparatar:
    APARATAR ID '(' lista_args ')' {
        Node* id_node = create_node("identifier:", 1, create_node($2, 0));
        $$ = create_node("aparatar", 2, id_node, $4); // $4 já é args
    }
  | APARATAR ID '(' ')' {
        Node* id_node = create_node("identifier:", 1, create_node($2, 0));
        Node* args_node = create_node("args", 0);
        $$ = create_node("aparatar", 2, id_node, args_node);
    }
chamada_revelio:
    REVELIO '(' LITERAL ')' {
        Node* literal_node = create_node("literal:", 1, create_node($3, 0));
        $$ = create_node("revelio", 1, literal_node);}
  | REVELIO '(' LITERAL ',' lista_args ')' {
        Node* literal_node = create_node("literal:", 1, create_node($3, 0));
        $$ = create_node("revelio", 2, literal_node, $5); // $5 já é args
    }
chamada_veritaserum:
    VERITASERUM '(' expressao ')' LUMOX lista_declaracoes NOX {
        $$ = create_node("veritaserum", 2, $3, $6);  // $3 = cond, $6 = bloco if
    }
  | VERITASERUM '(' expressao ')' LUMOX lista_declaracoes NOX
    CRUCIO LUMOX lista_declaracoes NOX {
        $$ = create_node("veritaserum", 3, $3, $6, $10);  // $3 = cond, $6 = bloco if, $10 = bloco else
    }

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

vetor:
    '[' lista_elementos ']' {
        $$ = create_node("vetor", 1, $2);
    }

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
        Node* list = $1;
        list->children = realloc(list->children, sizeof(Node*) * (list->num_children + 1));
        list->children[list->num_children++] = num_node;
        $$ = list;
    }

vetor_float:
    '[' lista_elementos_float ']' {
        $$ = create_node("vetor", 1, $2);
    }

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
        Node* list = $1;
        list->children = realloc(list->children, sizeof(Node*) * (list->num_children + 1));
        list->children[list->num_children++] = real_node;
        $$ = list;
    }

lista_args:
    expressao {
        $$ = create_node("args", 1, $1);
    }
  | lista_args ',' expressao {
        Node* list = $1;
        list->children = realloc(list->children, sizeof(Node*) * (list->num_children + 1));
        list->children[list->num_children++] = $3;
        $$ = list;
    }

lista_params:
    ID {
        $$ = create_node("args", 1, create_node($1, 0));
    }
  | lista_params ',' ID {
        int n = $1->num_children;

        // Cria novo vetor com n + 1 filhos
        Node** children = malloc(sizeof(Node*) * (n + 1));
        for (int i = 0; i < n; i++) {
            children[i] = $1->children[i];
        }
        children[n] = create_node($3, 0);

        Node* new_args = malloc(sizeof(Node));
        new_args->label = strdup("args");
        new_args->num_children = n + 1;
        new_args->children = children;

        $$ = new_args;

        // Libera o antigo args se quiser evitar vazamento
        free($1->children);
        free($1->label);
        free($1);
    };

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
