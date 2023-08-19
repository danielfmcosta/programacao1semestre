#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LETTERS 50

int conta(char *frase, char *palavra);

int main(){
    char *frase=malloc(MAX_LETTERS), *palavra=malloc(MAX_LETTERS);
    int n;
    printf("Frase? ");
    fgets(frase, MAX_LETTERS, stdin);
    printf("Palavra? ");
    scanf("%s", palavra);
    n = conta(frase, palavra);
    printf("Resultado: A palavra %s apareceu %d vezes na frase.\n", palavra, n);
}

int conta(char *frase, char *palavra){
    int n=0;
    const char *ptr = frase;
    while(*ptr != '\0'){
        if(strncmp(ptr, palavra, strlen(palavra)) == 0){
            n++;
        }
        ptr++;
    }
    return n;
}