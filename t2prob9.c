#include <stdio.h>

int main()
{
    int n, m = 2, flag;
    printf("Insira o numero de numeros primos que pretende: ");
    scanf("%i", &n);
    printf("Os primeiros %i numeros primos sao:\n", n);
    while(n>0)
    {
      while(1)
      {
        flag=1;
        for(int i=2; i<=m/2; i++)
        {
          if(m%i==0)
          {
            flag=0;
            break;
          }
        }
        if(flag)
        {        
          printf("%i\n", m);
        }
        m++;
        if(flag)
        {
          n--;
          break;
        }
      }
    }

    return 0;
}