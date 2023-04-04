%{

%}
digit [0-9]+
header "#include<"[a-z]+".h>"
inbuilt [\t]*"printf(".*")"|[\t]*"scanf(".*")"|[\t]*"clrscr()"|[\t]*"getch()"|[\t]*"exit(.+)"|"return 0"\n
comment [\t]*"/*".*"*/"[\t]*\n
main_func "int main()"|"void main()"
function [\t]*[a-zA-Z]+"(".*")"[\t]*\n
datatype [\t]*"int"|[\t]*"char"[\t]*"float"
operator "+"|"-"|"*"|"/"
terminator ";"
bracket1 [\t]*"{"[\t]*
bracket2 [\t]*"}"[\t]*
loop [\t]*"if(".*")"|[\t]*"else"|[\t]*"for"[\t]*|[\t]*"while"|[\t]*"do"
relational [\t]*"<"|">"|"<="|">="|"=="|"="|"!="|"%"
logical [\t]*"&&"|"||"
word [a-z]+[a-zA-Z0-9]

%%
{digit}         {printf("\nNumbers                     ::  %s",yytext);}
{header}        {printf("\nHeader file                     ::  %s",yytext);}
{inbuilt}       {printf("\nInbuild function                     ::  %s",yytext);}
{comment}       {printf("\nComments                     ::  %s",yytext);}
{main_func}     {printf("\nMain Function                     ::  %s",yytext);}
{function}      {printf("\nFunction                     ::  %s",yytext);}
{datatype}      {printf("\nDatatype                     ::  %s",yytext);}
{operator}      {printf("\noperator                     ::  %s",yytext);}
{terminator}    {printf("\nterminator                     ::  %s",yytext);}
{bracket1}      {printf("\nopening curly brace                     ::  %s",yytext);}
{bracket2}      {printf("\nclosing curly brace                     ::  %s",yytext);}
{relational}    {printf("\nrelational operator                     ::  %s",yytext);}
{loop}          {printf("\nloop statement                     ::  %s",yytext);}
{logical}       {printf("\nlogical operator                     ::  %s",yytext);}
{word}          {printf("\nword                     ::  %s",yytext);}
%%

int yywrap() {

}

int main() {
    yylex(); // bultin code to compile lexical compiler
    return 0;
}
