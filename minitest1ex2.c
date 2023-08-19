#include <stdio.h>

int main()
{
    int ano = 0, produzidos, vendidos, diferenca, antproduzidos = 1000000, antdiferenca = 0, anomax, anomin;
    for(int i = 0; i < 20; i++)
    {
        scanf("%d %d %d", &ano, &produzidos, &vendidos);
        diferenca = produzidos - vendidos;
        printf("Difenreca em %d: %d\n", ano, diferenca);
        if(antproduzidos > produzidos)
        {
            antproduzidos = produzidos;
            anomin = ano; 
        }
        if(antdiferenca < diferenca)
        {
            antdiferenca = diferenca;
            anomax = ano;
        }
    }
    printf("Ano em que foram produzidos menos exemplares: %d", anomin);
    printf("Ano em a diferenca entre produzidos e vendidos foi maior : %d", anomax);
}