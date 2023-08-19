#include <stdio.h>

int main()
{
    float n;
    printf("Insira um numero: ");
    scanf("%f", &n);
    printf("Numero com 3 casas decimais = %.3f\n", n);
    printf("Parte inteira = %d\n", (int) n);
    printf("Parte decimal = %f\n", n - (int) n);
}