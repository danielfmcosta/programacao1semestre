#include <stdio.h>
#include <string.h>

int main()    
{    
    int n,soma=0,m;
    printf("Insira um numero? ");
    scanf("%d",&n);
while(n>0)
{
    m=n%10;
    soma=soma+m;
    n=n/10;
}
    printf("A soma dos digitos e %d",soma);
return 0;
}   