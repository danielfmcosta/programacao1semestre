#include <stdio.h>

int main()
{
    float c, f, k;
    printf("Qual a temperatura? ");
    scanf("%f", &c);
    k = c + 273.15;
    f = c * (9.0/5) + 32;
    printf("%.2f C = %.2f K\n", c, k);
    printf("%.2f C = %.2f F\n", c, f);
}