#include <stdio.h>

int main()
{
    float perimetro = 0, area = 0;
    int r;
    printf("Raio?");
    scanf("%i", &r);
    perimetro = 2*r*3.1416;
    area = r*r*3.1416;
    printf("Perimetro: %.4f\n", perimetro);
    printf("Area: %.4f\n", area);
}