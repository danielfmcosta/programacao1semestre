#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Altura: ");
        scanf("%i", &n);
    }
    while (n <= 4);

    for (int i = 0; i < (n-1); i++)
    {
        for (int j = (n-2); j > i; j--)
        {
            printf("_");
        }
        for(int h = 0; h <= i; h++)
        {
            printf("*");
        }
        for(int h = 0; h < i; h++)
        {
            printf("*");
        }
        printf("\n");
    }
    while(n>2)
    {
        printf("_");
        n--;
    }
    printf("*");
}