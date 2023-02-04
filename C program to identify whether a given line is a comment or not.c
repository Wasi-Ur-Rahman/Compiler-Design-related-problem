#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    gets(s);
    int n = strlen(s);

    if (s[0] == '/' && s[1] == '/') {
        printf("This line is a comment\n");
    }else if (s[0] == '/' && s[1] == '*' && s[n - 2] == '*' && s[n - 1] == '/') {
        printf("This line is a comment\n");
    }else {
        printf("This line is not a comment\n");
    }

    return 0;
}
