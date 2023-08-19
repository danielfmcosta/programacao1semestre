#include <stdio.h>

int main()
{
    int sT, d, h, m, sF;
    printf("Quantos segundos? ");
    scanf("%d", &sT);
    d=sT/86400;
    h=(sT%86400)/3600;
    m=((sT%86400)%3600)/60;
    sF=((sT%86400)%3600)%60;
    printf("%d segundos correspondem a %d dia, %d horas, %d minutos e %d segundos\n", sT, d, h, m, sF);
}