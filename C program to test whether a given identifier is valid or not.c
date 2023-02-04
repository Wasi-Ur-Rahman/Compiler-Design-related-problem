#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char s[100];
    printf("Enter a string: ");
    gets(s);

    int n = strlen(s);

    if (s == "auto" ||
        s == "double" ||
        s == "else" ||
        s == "break" ||
        s == "enum" ||
        s == "struct" ||
        s == "long" ||
        s == "if" ||
        s == "do" ||
        s == "continue" ||
        s == "union" ||
        s == "switch" ||
        s == "case" ||
        s == "for" ||
        s == "while" ||
        s == "sizeof" ||
        s == "void" ||
        s == "volatile" ||
        s == "unsigned" ||
        s == "extern" ||
        s == "typedef" ||
        s == "char" ||
        s == "static" ||
        s == "const" ||
        s == "float" ||
        s == "short" ||
        s == "signed" ||
        s == "register" ||
        s == "goto" ||
        (s[0] == '_' || (s[0] >= '0' && s[0] <= '9') || (s[0] >= 'A' && s[0] <= 'Z') || (s[0] >= 'a' && s[0] <= 'z')) == false)
    printf("This is not a valid identifier\n");
    else {
        for (int i = 0;i < n;i++) {
            if ((s[i] == '_' || (s[i] >= '0' && s[i] <= '9') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) == false) {
                printf("This is not a valid identifier\n");
                return 0;
            }
        }
        printf("This is a valid identifier\n");
    }
    return 0;
}
