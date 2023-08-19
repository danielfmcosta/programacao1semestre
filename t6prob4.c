#include <stdio.h>
#define NUM 4

int main(){
    int num[NUM][3];
    float med[NUM];
    for(int i=0; i<NUM; i++){
        printf("Dados do aluno %d: ", i+1);
        for(int k=0; k<3; k++){
            scanf("%d", &num[i][k]);
        }
    }
    for(int i=0; i<NUM; i++){
        med[i]=(num[i][1]+num[i][2])/2.0;
    }
    printf("Numero\tNota 1\t Nota 2\t Media\n");
    for(int i=0; i<NUM; i++){
        for(int k=0; k<3; k++){
            printf("%d\t", num[i][k]);
        }
        printf("%.2f\n", med[i]);
    }
}