#include <stdio.h>

int contaRepeticao(int v[], int tamanhoVetor, int numero);

int main(){
    int num[100];
    int i=0, numpesq, count;
    do{
        printf("Introduza um numero: ");
        if(scanf("%d", &num[i]) == 1){
            if(num[i] < 0){
                break;
            }
            i++;
        }
    }while(1);
    printf("Numero a pesquisar: ");
    scanf("%d", &numpesq);
    count = contaRepeticao(num, i, numpesq);
    printf("Maior sequencia com numeros %d tem tamanho %d\n", numpesq, count);
}

int contaRepeticao(int v[], int tamanhoVetor, int numero){
    int count = 0;
    for(int i = 0; i<=tamanhoVetor; i++){
        if(v[i] == numero){
            count++;
        }
    }
    return count;
}