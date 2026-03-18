#include <stdio.h>

int main() {
    char str[200];
    int count=1;

    printf("Enter sentence: ");
    fgets(str,200,stdin);

    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' ')
            count++;
    }

    printf("Total words = %d",count);
}
