#include <stdio.h>

int main(){
    int a, b, c, i;
    printf("Insira um operando: ");
    scanf("%d", &a);
    printf("Insira um operando (potencia de base 2): ");
    scanf("%d", &b);
    for(i=0; b!=1; i++){
        b = b/2;
    }
    c = a<<i;
    printf("O resultado da multiplicacao e: %d", c);
}