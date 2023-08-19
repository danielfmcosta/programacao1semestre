#include <stdio.h>

int dividendo, divisor, quociente=0, resto=0;
int dividir(int dividendo, int divisor);

int main()
{
    int retorno;
    printf("Dois inteiros: ");
    scanf("%d %d ", &dividendo, &divisor);
    retorno = dividir(dividendo, divisor);
    if(retorno==0){
        printf("Divisão impossivel\n");
    }
    else{
    printf("O resultado é %d + %d\n", quociente, resto );
    }
    return 0;
}

int dividir(int dividendo, int divisor){
    int temp = 1;
    if(divisor==0){
        return 0;
    }
    while(dividendo>0){
        if((dividendo-divisor)>=0){
            dividendo = dividendo-divisor;
            quociente++;
        }
        else{
            resto=dividendo;
        }
    }

    return -1;
}