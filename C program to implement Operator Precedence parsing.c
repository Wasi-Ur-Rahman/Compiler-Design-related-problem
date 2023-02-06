#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>


int main() {
    char s[100];
    char table[100][100] = {
        {' ','+','*','i','$'},
        {'+','>','>','<','>'},
        {'*','>','>','<','>'},
        {'i','>','>','-','>'},
        {'$','<','<','<','A'}
    };

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    int n = strlen(s);
    char stack[n];
    stack[0] = '$';

    printf("\n\nOperator precedence grammer\n");
    printf("T = T * T\n");
    printf("T = T + T\n");
    printf("T = T / T\n");
    printf("T = id\n");
    printf("No epsilon on the right side\n");

    printf("\n\nOperator precedence grammer relation table\n");

    for (int i = 0;i <= 4;i++) {
        for (int j = 0;j <= 4;j++) {
            printf("%c ",table[i][j]);
        }
        printf("\n");
    }


    for (int i = 0;i < n - 1;i++) {
        if (s[i] == s[i + 1]) {
            printf("The string is not recognized by operator precedence grammer\n");
            return;
        }
    }

    printf("\nParse Table:\n\n");
    int top = 0,stsize = 0,pointer = 1,i = 0;
    printf("Stack\t\tInput\n");
    while(true) {
        if (i >= n) break;

        for (int k = 0;k <= top;k++)
            printf("%c",stack[k]);
        printf("\t\t");
        for (int k = i;k < n;k++)
            printf("%c",s[k]);
        if (stack[top] == 'i') {
            stack[top] = 'T';
        }else if (stack[top] == 'T') {
            top++;
            stack[top] = s[i];
            i++;
        }else {
            top++;
            stack[top] = s[i];
            i++;
        }
    }

    printf("\nthe given string is parsed using operator precedence grammer\n");
    return 0;
}
