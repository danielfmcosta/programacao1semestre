#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void quociresto(int dividendo, int divisor, int *quociente, int *resto);
int soma(int n);
int par(int n);

int main(){
    int n, divisor, *quociente=malloc(sizeof(int)), *resto=malloc(sizeof(int)), sum, paridade;
    printf("Um numero: ");
    scanf("%d", &n);
    sum = soma(n);
    paridade = par(n);
    printf("A soma dos digitos todos é %d\n", sum);
    if(paridade==1){
        printf("O numero e par\n");
    }
    else{
        printf("O numero e impar\n");
    }
    printf("Queres dividir por qual numero? ");
    scanf("%d", &divisor);
    quociresto(n, divisor, quociente, resto);
    printf("O quociente e %d e o resto e %d\n", *quociente, *resto);
}

void quociresto(int dividendo, int divisor, int *quociente, int *resto){
    while(dividendo>0){
        if((dividendo-divisor)>=0){
            dividendo = dividendo-divisor;
            *quociente += 1;
        }
        else{
            *resto=dividendo;
        }
    }
}

int soma(int n) {
    int sum = 0;
    char str[10], m[2]={0};
    sprintf(str, "%d", n);
    for (int i = 0; i < (int)strlen(str); i++){
        m[0]=str[i];
        sum += atoi(m);
    }
    return sum;
}

int par(int n){
    char str[(int)((ceil(log10(n))+1)*sizeof(char))];
    sprintf(str, "%d", n);
    switch (str[strlen(str)-1])
    {
    case 0:
        return 1;
        break;
    case 1:
        return 0;
        break;
    case 2:
        return 1;
        break;
    case 3:
        return 0;
        break;
    case 4:
        return 1;
        break;
    case 5:
        return 0;
        break;
    case 6:
        return 1;
        break;
    case 7:
        return 0;
        break;
    case 8:
        return 1;
        break;
    case 9:
        return 0;
        break;
    default:
        return 0;
        break;
    }
}