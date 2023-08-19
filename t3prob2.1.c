#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio(int limiteInferior, int limiteSuperior);

int main()
{
    int n, f, v = 0;
    srand(time(NULL));
    printf("Quantos lancamentos? ");
    scanf("%i", &n);
    for(int i = 0; i < n; i++)
    {
        f = (aleatorio(1, 6) % 6) + 1;
        if(f == 6)
        {
            v++;
        }
    }
    printf("A face seis saiu %i vezes.", v);
}
int aleatorio(int m, int s)
{
    int f;
    f = rand();
    if(f <= 6 && f >= 1);
    return f;
}