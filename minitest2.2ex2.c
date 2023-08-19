#include <stdio.h>

float custo(char z, int servico);

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
            sumblo = sumblo + custo('A', 1);
            tempoT = tempoT + 21;
            break;
        case 'B':
            printf("Encomenda %d - blovo\n", n);
            sumblo = sumblo + custo('B', 1);
            tempoT = tempoT + 24;            
            break;
        case 'C':
            printf("Encomenda %d - uverits\n", n); 
            sumuver = sumuver + custo('C', 0);
            tempoT = tempoT + 15;  
            break;
        case 'D':
            printf("Encomenda %d - uverits\n", n);
            sumuver = sumuver + custo('D', 0);
            tempoT = tempoT + 23; 
            break;
        case 'E':
            printf("Encomenda %d - blovo\n", n);
            sumblo = sumblo + custo('E', 1);
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

float custo(char z, int servico)
{
    if(z == 'A' && servico == 0)
        return 5.25;
    else if(z == 'A'&& servico == 1)
        return 3.50;
    else if(z == 'B'&& servico == 0)
        return 4.50;
    else if(z == 'B'&& servico == 1)
        return 4.25;
    else if(z == 'C'&& servico == 0)
        return 3.25;
    else if(z == 'C'&& servico == 1)
        return 5.00;
    else if(z == 'D'&& servico == 0)
        return 3.50;
    else if(z == 'D'&& servico == 1)
        return 4.50;
    else if(z == 'E'&& servico == 0)
        return 4.75;    
    else if(z == 'E'&& servico == 1)
        return 4.00;
    else
        return 1;
}