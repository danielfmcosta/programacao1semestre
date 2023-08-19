#include <stdio.h>

int main()
{
    int pop_PT, pop_CN, flag = 0, anoT;
    float quantCO2_PT, quantCO2_CN, emCO2_PT, emCO2_CN;
    for(int count = 2000; count <= 2020; count++)
    {
        scanf("%d\t%f\t%d\t%f", &pop_PT, &quantCO2_PT, &pop_CN, &quantCO2_CN);
        emCO2_PT = quantCO2_PT*1000000/pop_PT;
        emCO2_CN = quantCO2_CN*1000000/pop_CN;
        printf("%d %.2f %.2f\n", count, emCO2_PT, emCO2_CN);
        if(flag == 0 && emCO2_CN > emCO2_PT)
        {
            flag = 1;
            anoT = count;
        }
    }
    printf("Ano em que a China ultrapassou Portugal : %d\n", anoT);
}