#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    printf("Enter a string: ");
    gets(s);

    int n = strlen(s);

    int one = 0,two = 0,three = 0;

    if (n == 1 && s[0] == 'a') {
        printf("%s is recognized under string a\n",s);
    }else if (n == 3 && s[0] == 'a' && s[1] == 'b' && s[2] == 'b') {
        printf("%s is recognized under string abb\n",s);
    }else {
        int i = 0;
        while (i < n && s[i] == 'a') {
            i++;
        }
        if (i >= n) {
            printf("%s is not recognized\n",s);
            return 0;
        }
        while (i < n && s[i] == 'b') {
            i++;
        }
        if (i >= n) {
            printf("%s is recognized under string a*b+\n",s);
            return 0;
        }
        printf("%s is not recognized\n",s);
    }
    return 0;
}
