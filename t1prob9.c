#include <stdio.h>

int main()
{
    float n, d;
    printf("Insira um numero: ");
    scanf("%f", &n);
    d = n - (int) n;
    if(d >= 0.5)
        n++;
    if((int)n%2==1)
        printf("%d %d", (int) (n-1), (int) (n+1));
    else
        printf("%d %d", (int) (n-2), (int) (n+2));
}