#include <stdio.h>
#include <math.h>

int main()
{
    float inc, a, x1, x2;
    printf("Qual o valor de a? ");
    scanf("%f", &a);
    printf("Qual o intervalo? ");
    scanf("%f %f", &x1, &x2);
    printf("Qual o incremento? ");
    scanf("%f", &inc);
    while (x1<=x2)
    {
        printf("f(%.1f)= %.1f\n", x1, a*(pow(x1, 2)));
        x1 += inc;
    }
}