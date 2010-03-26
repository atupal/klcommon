%{
#include <stdio.h>
#include "sym_table.h"

extern int yylex();/*generated by flex */ 
extern char *yytext;

static int cur_type;
%}
/* yacc will generate these constant */
%token CHAR INT SHORT FLOAT DOUBLE STRUCT IDENTIFIER
%start declaration
%%
declaration
	: type_specifier init_declarator_list ';'
	;

type_specifier
	: basic_type { cur_type = type_get_id( yytext ); }
	| struct_specifier
	;

basic_type
	: CHAR
	| SHORT
	| INT
	| FLOAT 
	| DOUBLE
	;

struct_specifier
	: STRUCT identifier '{' struct_declaration_list '}'
	| STRUCT '{' struct_declaration_list '}'
	| STRUCT identifier
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: type_specifier struct_declarator_list ';'
	;

struct_declarator_list
	: identifier
	| struct_declarator_list ',' identifier
	;

identifier
	: IDENTIFIER { sym_add( yytext, cur_type ); }
	;

init_declarator_list
	: identifier
   	| init_declarator_list ',' identifier
	;
%%
void yyerror( const char *s )
{
	fprintf( stderr, "yyerror: %s\n", s );
}

int main()
{
	type_init();
	yyparse();
	printf( "---------------------------------------------\n" );
	type_dump();
	printf( "---------------------------------------------\n" );
	sym_dump();
	type_release();
	sym_clear();
	return 0;
}

