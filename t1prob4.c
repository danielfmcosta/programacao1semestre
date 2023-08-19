#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Numero inteiro 1? ");
    scanf("%i", &n1);
    printf("Numero inteiro 2? ");
    scanf("%i", &n2);
    if(n1%n2 == 0)
        printf("%i e multiplo de %i", n1, n2);
    else
        printf("%i nao e multiplo de %i", n1, n2);
}
