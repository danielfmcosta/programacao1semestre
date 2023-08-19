#include <stdio.h>
#include <math.h>

void preencher_vetor(float v[], int n);
void imprimir_vetor(float v[], int n);
int sum_v(float x[], int n, float vRet[]);
float range_v(float x[]);
int diff_v(float x[], int n, float vRet[]);

int main(){
    float x[16], vRet[9];
    int n, k;
    do{
        printf("Quantos elementos pretende armazenar? ");
        scanf("%d", &n);
        if(n>15 || n<0){
            printf("O numero de elementos esta limitada a 15\n");
        }
    }while(n>15 || n<0);
    preencher_vetor(x, n);
    imprimir_vetor(x, n);
    k = sum_v(x, n, vRet);
    printf("Vetor Soma: {");
    for(int i=0; i<k; i++){
        printf("%.2f ", vRet[i]);
    }
    printf("}\n");
    printf("Gama: %.2f\n", range_v(x));
    k = diff_v(x, n, vRet);
    printf("Vetor Desvio Max Par: {");
    for(int i=0; i<k; i++){
        printf("%.2f ", vRet[i]);
    }
    printf("}\n");

}

void preencher_vetor(float x[], int n){
    for(int i=1; i<=n; i++){
        printf("Introduza o elemento %d: ", i);
        scanf("%f", &x[i-1]);
    }
}
void imprimir_vetor(float x[], int n){
    printf("O vetor lido foi: {");
    for(int i=0; i<n; i++){
        printf("%.2f ", x[i]);
    }
    printf("}\n");
}
int sum_v(float x[], int n, float vRet[]){
    int k=0;
    for(int i=0; i<n; i+=2){
        vRet[k]=x[i]+x[i+1];
        k++;
    }
    return k;
}
float range_v(float x[]){
    float max=0, min=100000;
    for(int i=0; i<10; i++){
        if(max<x[i]){
            max=x[i];
        }
    }
    for(int i=0; i<10; i++){
        if(min>x[i]){
            min=x[i];
        }
    }
    return (max-min);
}
int diff_v(float x[], int n, float vRet[]){
    int k=0;
    for(int i=0; i<n; i+=2){
        if(x[i]>x[i+1]){
            vRet[k]= x[i] - sqrt(x[i]*x[i+1]);
        }
        else{
            vRet[k]= x[i+1] - sqrt(x[i]*x[i+1]);
        }
        k++;
    }
    return k;
}