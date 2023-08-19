#include <stdio.h>

int main()
{
    int n, m;
    printf("Insira numero para variavel 1: ");
    scanf("%i", &n);
    printf("Insira numero para variavel 2: ");
    scanf("%i", &m);    
    n = n + m;
    m = n - m;
    n = n - m;
    printf("Valor da variavel 1 depois da troca: %i\n", n);
    printf("Valor da variavel 2 depois da troca: %i\n", m);
}