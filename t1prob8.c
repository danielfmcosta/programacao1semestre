#include <stdio.h>

int main()
{
    float r,r1,r2;
    printf("Valor de R1 (em ohm)? ");
    scanf("%f", &r1);
    printf("Valor de R2 (em ohm)? ");
    scanf("%f", &r2);
    r = r1 + r2;
    printf("Valor da resistencia equivalente em serie: %.4f ohm.\n", r);
    r = (r1 * r2)/(r1 + r2);
    printf("Valor da resistencia equivalente em paralelo: %.4f ohm.\n", r);
}