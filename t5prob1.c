#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio(int m, int s);

int main()
{
    int lanca[31];
    int um = 0, dois = 0, tres = 0, quatro = 0, cinco = 0, seis = 0;
    srand(time(NULL));
    printf("Histograma de 30 lancamentos: \n");
    for(int i = 0; i<=30; i++){
        lanca[i] = (aleatorio(1, 6) % 6) + 1;
    }
    for(int i = 0; i<=30; i++){
        if(lanca[i] == 1){
            um++;
        }
        if(lanca[i] == 2){
            dois++;
        }
        if(lanca[i] == 3){
            tres++;
        }
        if(lanca[i] == 4){
            quatro++;
        }
        if(lanca[i] == 5){
            cinco++;
        }
        if(lanca[i] == 6){
            seis++;
        }
    }
    printf("1 - ");
    for(int i = 0; i<um; i++){
        printf("*");
    }
    printf("\n2 - ");
    for(int i = 0; i<dois; i++){
        printf("*");
    }
    printf("\n3 - ");
    for(int i = 0; i<tres; i++){
        printf("*");
    }
    printf("\n4 - ");
    for(int i = 0; i<quatro; i++){
        printf("*");
    }
    printf("\n5 - ");
    for(int i = 0; i<cinco; i++){
        printf("*");
    }
    printf("\n6 - ");
    for(int i = 0; i<seis; i++){
        printf("*");
    }
}

int aleatorio(int m, int s)
{
    int f;
    f = rand();
    if(f <= 6 && f >= 1);
    return f;
}