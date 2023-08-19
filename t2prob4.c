#include <stdio.h>

int main()
{
    int n, m = 2, primo=1;
    printf("Insira um numero? ");
    scanf("%d", &n);
    while(n>1)
    {
        for(int i = 2; i <= m/2; i++){
            if(m%i==0)
                primo = 0;
        }
        if(primo == 1 && n%m == 0){
            n = n/m;
            printf("%d ", m);
        }
        else if(primo == 0 || n&m != 0){
            m++;
            primo=1;
        }      
    }
}