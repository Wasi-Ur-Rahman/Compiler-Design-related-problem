%{
int a = 0,b = 0;
%}



%%
[aeiouAEIOU] {a++;}
[a-zA-Z] {b++;}
"\n" {printf("%d %d\n",a,b);} {a = 0;} {b = 0;}
%%

int yywrap() {

}

int main() {
    yylex(); // bultin code to compile lexical compiler
    printf("Vowels: %d\nConsonents: %d\n",a,b);
    return 0;
}
