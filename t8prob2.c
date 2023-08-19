#include <stdio.h>

#define N 3

void ordena(int *valorA, int *valorB, int *valorC);

int main(){
    int valorA, valorB, valorC;
    printf("Insira os valores a ordenar: ");
    scanf("%d %d %d", &valorA, &valorB, &valorC);
    ordena(&valorA, &valorB, &valorC);
}

void ordena(int *valorA, int *valorB, int *valorC){
        if(*valorA>*valorB && *valorA>*valorC){
            if(*valorB>*valorC){
                printf("valores a,b,c ordenados por ordem crescente: %d %d %d\n", *valorA, *valorB, *valorC);
            }
            else{
                printf("valores a,b,c ordenados por ordem crescente: %d %d %d\n", *valorA, *valorC, *valorB);
            }
        }
        if(*valorB>*valorA && *valorB>*valorC){
            if(*valorA>*valorC){
                printf("valores a,b,c ordenados por ordem crescente: %d %d %d\n", *valorB, *valorA, *valorC);
            }
            else{
                printf("valores a,b,c ordenados por ordem crescente: %d %d %d\n", *valorB, *valorC, *valorA);
            }
        }
        if(*valorC>*valorB && *valorC>*valorA){
            if(*valorA>*valorB){
                printf("valores a,b,c ordenados por ordem crescente: %d %d %d\n", *valorC, *valorA, *valorB);
            }
            else{
                printf("valores a,b,c ordenados por ordem crescente: %d %d %d\n", *valorC, *valorB, *valorA);
            }
        }
}