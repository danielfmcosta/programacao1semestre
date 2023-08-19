#include <stdio.h>

int main()
{
    int n;
    printf("Numero? ");
    scanf("%d", &n);
    if(n%2 == 0)
        printf("%d e par\n", n);
    else
        printf("%d e impar\n", n);
}