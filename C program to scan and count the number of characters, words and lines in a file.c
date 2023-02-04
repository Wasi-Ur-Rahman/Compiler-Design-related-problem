#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char filename[4000];
    char c;
    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    int cc = 0,word = 0,line = 0;


    for (c = getc(fp); c != EOF; c = getc(fp)) {
        if (c == '\n')
            line += 1;
        if (isspace(c)) {
            cc++;
            word++;
        }
        if (isalnum(c)) cc++;
    }


    fclose(fp);
    printf("no of characters: %d\n",cc);
    printf("no of words: %d\n",word);
    printf("no of lines: %d\n",line);
    return 0;
}
