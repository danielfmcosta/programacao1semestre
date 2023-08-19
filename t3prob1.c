#include <stdio.h>

int main()
{
    float altura, pesoideal;
    char s;
    printf("Insira a altura da pessoa: ");
    scanf("%f", &altura);
    printf("Insira o sexo da pessoa(M/F): ");
    scanf(" %c", &s);
    if(s == 'M')
    {
        pesoideal = 72.7*altura - 58;
        printf("O peso ideal seria de %f quilos\n", pesoideal);
    }
    else if(s == 'F')
    {
        pesoideal = 62.1*altura - 44.7;
        printf("O peso ideal seria de %.2f quilos\n", pesoideal);
    }
    else
    {
        return 1;
    }
}