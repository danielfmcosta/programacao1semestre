#include <stdio.h>

int main()
{
    int num, max = 0, min = 100, i=0, soma = 0;
    float med;
    while(1){
        if(scanf("%d", &num)){
            i++;
            soma += num;
            if(max<num){
                max=num;
            }
            if(min>num){
                min=num;
            }
        }
        else
            break;
    }
    med = (float) soma/i;
    printf("A media dos numeros e %.2f, o maximo e %d e o minimo e %d.", med, max, min);
}