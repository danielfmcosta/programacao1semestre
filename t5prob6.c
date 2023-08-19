#include <stdio.h>

int main(){
    float x[16], a;
    int counter = 0, i;
    for(i=1; i<16; i++){
        printf("Introduza o elemento %d: ", i);
        scanf("%f", &x[i-1]);
        counter++;
        for (int j=0; j<i; j++){
            for (int k = j + 1; k < i; k++){
                if (x[j] > x[k]){
                    a =  x[j];
                    x[j] = x[k];
                    x[k] = a;
                }
            }
        }
        printf("Vetor: {");
        for(i=0; i<counter; i++){
            printf("%f ", x[i]);
        }
        printf("}\n");
    }
}