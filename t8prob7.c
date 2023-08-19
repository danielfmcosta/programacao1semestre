#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LETTERS 21

int main(){
    char *str;
    int n;
    str = (char *) calloc(MAX_LETTERS, sizeof(char));
    printf("Escreva uma frase: ");
    fgets(str, MAX_LETTERS, stdin);
    n = strlen(str);
    printf("A frase invertida e ");
    for(int i=n; i>=0; i--){
        printf("%c", str[i]);
    }
    printf("\n");
    free(str);
}