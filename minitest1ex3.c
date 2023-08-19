#include <stdio.h>

int main()
{
    float preenchimento, enchimento, max = 2.0, min = 6.0, total = 0.0;
    int totalm, totals, totalmm;
    while(1){
        if(scanf("%f", &preenchimento)){
            if(preenchimento > 3.0 && preenchimento < 5.0){
                enchimento = preenchimento;
                if(max < enchimento){
                    max = enchimento;
                }
                if(min > enchimento){
                    min = enchimento;
                }
                total += enchimento;
            }
        }
        else
            break;
    }
    totalm = total/60;
    totals = (int) total%60;
    totalmm = (total - (int) total)*1000;
    printf("%.2f %.2f %d %d %d\n", max, min, totalm, totals, totalmm);
}