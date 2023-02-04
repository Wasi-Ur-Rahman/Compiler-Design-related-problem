#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    printf("Enter a string: ");
    gets(s);

    int n = strlen(s);

    if (n == 1) {
        if (s[0] == '+' || s[0] == '-' ||
            s[0] == '/' || s[0] == '*' ||
            s[0] == '=' || s[0] == '%' ||
            s[0] == '!' || s[0] == '|' ||
            s[0] == '^' || s[0] == '&' || s[0] == '>' || s[0] == '<')
                printf("This is an operator\n");
        else printf("This is not an operator\n");
    }else if (n == 2){
        if ((s[0] == '+' && (s[1] == '=' || s[1] == '+')) ||
            (s[0] == '-' && (s[1] == '=' || s[1] == '-')) ||
            (s[0] == '*' && s[1] == '=') ||
            (s[0] == '/' && s[1] == '=') ||
            (s[0] == '%' && s[1] == '=') ||
            (s[0] == '<' && (s[1] == '<' || s[1] == '=')) ||
            (s[0] == '>' && (s[1] == '>' || s[1] == '=')) ||
            (s[0] == '!' && s[1] == '=') ||
            (s[0] == '&' && s[1] == '&') ||
            (s[0] == '|' && s[1] == '|')
            )
                printf("This is an operator\n");
        else printf("This is not an operator\n");
    }else {
        printf("This is not an operator\n");
    }

    if ()
    return 0;
}
