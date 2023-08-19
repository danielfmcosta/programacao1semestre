#include <stdio.h>

void desenha(char c, int linhas, int colunas);

int main()
{
    int linhas, colunas;
    char c;
    printf("Introduza um carater: ");
    scanf("%c", &c);
    printf("Introduza o numero de linhas: ");
    scanf("%d", &linhas);
    printf("Introduza o numero de colunas: ");
    scanf("%d", &colunas);
    desenha(c, linhas, colunas);
}

void desenha(char c, int linhas, int colunas){
    for(int i=0; i<colunas; i++){
        printf("%c", c);
    }
    printf("\n");
    for(int i=1; i<linhas; i++){
        printf("%c", c);
        for(int j=2; j<colunas; j++){
            printf("_");
        }
        printf("%c", c);
        printf("\n");
    }
    for(int i=0; i<colunas; i++){
        printf("%c", c);
    }
}