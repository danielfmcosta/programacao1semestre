#include <stdio.h>

float contribuicao(float emissao_setor, float emissao_total);

int main()
{
    int ano, anomax, anomin, n;
    float quantN2O, agroquantN2O, contagroN2O, soma = 0.0, med, antesquantN2O = 1, antescontagroN2O = 0;
    for(int i = 0; 1; i++)
    {
        if(scanf("%d %f %f", &ano, &quantN2O, &agroquantN2O) != 0)
        {
            soma = soma + quantN2O;
            n = i + 1;
            ano = 2000 + i;
            contagroN2O = contribuicao(agroquantN2O, quantN2O);
            printf("%d: %.1f\n", ano, contagroN2O);
            if(antesquantN2O > quantN2O)
            {
                antesquantN2O = quantN2O;
                anomin = ano;
            }
            if(antescontagroN2O < contagroN2O)
            {
                antescontagroN2O = contagroN2O;
                anomax = ano;
            }
        }
        else
        break;
    }
    med = soma/n;
    printf("Ano em que a agricultura mais contribuiu para as emissoes de N2O per capita : %d\n", anomax);
    printf("Ano em que as emissoes de N2O per capita foram mais reduzidas : %d\n", anomin);
    printf("Media das emissoes de N2O per capita : %.3f\n", med);
}

float contribuicao(float emissao_setor, float emissao_total)
{
    float x = 0;
    x = emissao_setor*100/emissao_total;
    return x;
}