#include <stdio.h>
#include <math.h>

int converte_codigo_cores(int cor, int pos, float *ret){
    if((cor>9 || cor <0) || (pos<0 || pos>3)){
        return -1;
    }
    if(pos==1){
        *ret=cor*10;
    }
    else if(pos==2){
        *ret=*ret+cor;
    }
    else if(pos==3){
        *ret=*ret*pow(10, cor);
    }
    return 1;
}

int main(){
    int cor, i, flag;
    float resistor = 0.0;
    printf("Cores:\n 0 - Black \n 1 - Brown \n 2 - Red \n 3 - Orange \n 4 - Yellow \n 5 - Green \n 6 - Blue \n 7 - Violet \n 8 - Grey \n 9 - White\n\n");
    for(i = 1; i < 4; i++){
        do{
            printf("Introduza a cor da banda %d: ", i);
            scanf("%d", &cor);
        }while((cor < -1) || (cor > 12));
        
        flag=converte_codigo_cores(cor, i, &resistor);
        if(flag<0){
            printf("Valor da posicao ou da resistencia invalidos\n");
            break;
        }
    }
    printf("Valor da resistencia: %.2f Ohms\n", resistor);
}