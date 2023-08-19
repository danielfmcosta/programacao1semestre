#include <stdio.h>
#define NUM 4

void ordena(float notas[NUM][2], int N);

int main(){
    int num[NUM][3];
    float notas[NUM][2];
    for(int i=0; i<NUM; i++){
        printf("Dados do aluno %d: ", i+1);
        for(int k=0; k<3; k++){
            scanf("%d", &num[i][k]);
        }
    }
    for(int i=0; i<NUM; i++){
        notas[i][0]=num[i][0];
        notas[i][1]=(num[i][1]+num[i][2])/2.0;
    }
    ordena(notas, NUM);
}

void ordena(float notas[NUM][2], int N){
    int pos=0, imax, i, aux;
    while (pos < N - 1) {
        imax = pos;
        i = pos + 1;
        while (i < N){
            if (notas[i][1] > notas[imax][1]){ 
                imax = i;
            }  
            i++;
        }
        if (imax != pos){
            aux = notas[pos][1];
            notas[pos][1] = notas[imax][1];
            notas[imax][1] = aux;
        }
        pos ++;
    }
    printf("Numero\t Media\n");
    for(int i=0; i<N; i++){
        printf("%.0f\t", notas[i][0]);
        printf("%.1f\n", notas[i][1]);
    }
}