#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("data.txt","w");
    fprintf(fp,"Hello File");
    fclose(fp);

    fp = fopen("data.txt","r");

    char ch;
    while((ch=fgetc(fp))!=EOF)
        printf("%c",ch);

    fclose(fp);
}
