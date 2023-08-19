#include <stdio.h>

float avg(float v[]);
float max(float v[]);
float min(float v[]);

int main(){
    float v[11];
    for(int i=1; i<11; i++){
        printf("Introduza o elemento %d: ", i);
        scanf("%f", &v[i-1]);
    }
    printf("Media: %f\n", avg(v));
    printf("Maximo: %f\n", max(v));
    printf("Minimo: %f\n", min(v));
    printf("Vetor: (");
    for(int i=0; i<10; i++){
        printf("%.2f ", v[i]);
    }
    printf(")\n");
}

float avg(float v[]){
    float avg, sum=0;
    for(int i=0; i<10; i++){
        sum = sum + v[i];
    }
    avg = sum/10;
    return avg;
}

float max(float v[]){
    float max=0;
    for(int i=0; i<10; i++){
        if(max<v[i]){
            max=v[i];
        }
    }
    return max;
}

float min(float v[]){
    float min=100000;
    for(int i=0; i<10; i++){
        if(min>v[i]){
            min=v[i];
        }
    }
    return min;
}