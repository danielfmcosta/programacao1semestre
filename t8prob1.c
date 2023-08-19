#include <stdio.h>

int *Vmaior(int *valor1, int *valor2);

int main(){
    int valor1, valor2, *vmaior;
    printf("Insira dois valores: ");
    scanf("%d %d", &valor1, &valor2);
    vmaior = Vmaior(&valor1, &valor2);
    printf("Endereço do maior: %p\n", vmaior);
    printf("Valor: %d\n", *vmaior);
}

int *Vmaior(int *valor1, int *valor2){
    printf("Endereço das variaveis: %p,  %p\n", valor1, valor2);
    if(*valor1>*valor2){
        return valor1;
    }
    else if(*valor2>*valor1){
        return valor2;
    }
    return 0;
}