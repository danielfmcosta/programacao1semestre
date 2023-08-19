#include <stdio.h>

void preencher_vetor(float v[], int n);
float somatorio_vetor(float v[], int n);
void imprimir_vetor(float v[], int n);

int main(){
    int n; 
    float v[16], sum;
    do{
        printf("Quantos elementos pretende armazenar? ");
        scanf("%d", &n);
        if(n>15 || n<0){
            printf("O numero de elementos esta limitada a 15\n");
        }
    }while(n>15 || n<0);
    preencher_vetor(v, n);
    imprimir_vetor(v, n);
    sum = somatorio_vetor(v, n);
    printf("e a soma dos seus elementos e: %.2f", sum);
}

void preencher_vetor(float v[], int n){
    for(int i=1; i<=n; i++){
        printf("Introduza o elemento %d: ", i);
        scanf("%f", &v[i-1]);
    }
}

void imprimir_vetor(float v[], int n){
    printf("O vetor lido foi: {");
    for(int i=0; i<n; i++){
        printf("%f ", v[i]);
    }
    printf("}\n");
}

float somatorio_vetor(float v[], int n){
    float sum=0;
    for(int i=0; i<n; i++){
        sum = sum + v[i];
    }
    return sum;
}