#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, f, v = 0;
    srand(time(NULL));
    printf("Quantos lancamentos? ");
    scanf("%i", &n);
    for(int i = 0; i < n; i++)
    {
        f = (rand() % 6) + 1;
        if(f == 6)
        {
            v++;
        }
    }
    printf("A face seis saiu %i vezes.", v);
}