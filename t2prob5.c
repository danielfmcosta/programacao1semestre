#include <stdio.h>
#include <math.h>

int main()
{
    int ano, ci, tax;
    float ca;
    printf("Qual a capital inicial? ");
    scanf("%d", &ci);
    printf("Qual a taxa de juro dada pelo banco? ");
    scanf("%d", &tax);
    printf("Durante quantos anos? ");
    scanf("%d", &ano); 
    ca = ci*pow((1+(tax/100.0)), ano);
    printf("O capital acumulado ao fim de %d anos e de %.3f euros.\n", ano, ca);
}