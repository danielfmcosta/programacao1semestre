#include <stdio.h>

int main()
{
    int n;
    char z;
    float sumuver = 0, sumblo = 0, med = 0, tempoT = 0, medmin, medseg;
    while(1)
    {
        if(scanf("%d %c", &n, &z))
        {
        switch (z)
        {
        case 'A':
            printf("Encomenda %d - blovo\n", n);
            sumblo = sumblo + 3.50;
            tempoT = tempoT + 21;
            break;
        case 'B':
            printf("Encomenda %d - blovo\n", n);
            sumblo = sumblo + 4.25;
            tempoT = tempoT + 24;            
            break;
        case 'C':
            printf("Encomenda %d - uverits\n", n); 
            sumuver = sumuver + 3.25;
            tempoT = tempoT + 15;  
            break;
        case 'D':
            printf("Encomenda %d - uverits\n", n);
            sumuver = sumuver + 3.50;
            tempoT = tempoT + 23; 
            break;
        case 'E':
            printf("Encomenda %d - blovo\n", n);
            sumblo = sumblo + 4.00;
            tempoT = tempoT + 24;            
            break;
        default:
            break;
        }
        }
        else
            break;
    }
    med = tempoT/n;
    medseg = (med - (int) med)*60; 
    printf("Custo total na uverits: %.2f euros\n", sumuver);
    printf("Custo total no blovo: %.2f euros\n", sumblo);
    printf("Tempo medio das entregas: %.0f minutos e %.0f segundos\n", med, medseg);
}