#include <stdio.h>
#include <math.h>

void cartesianas_polares(float x, float y, float *r, float *theta);
void polares_cartesianas(float r, float theta, float *x, float *y);

int main(){
    float x, y, r, theta;
    int flag;
    printf("Queres descobrir os pontos ou a distancia e o declive? (1/0) ");
    scanf("%d", &flag);
    if(flag == 1){
        printf("Qual e o declive e a distancia do ponto? ");
        scanf("%f %f", &r, &theta);
        polares_cartesianas(r, theta, &x, &y);
        printf("As coordenadas sao %f, %f\n", x, y);
    }
    else{
        printf("Quais são as coordenadas do ponto? ");
        scanf("%f %f", &x, &y);
        cartesianas_polares(x, y, &r, &theta);
        printf("O declive e %f e a distancia e %f\n", theta, r);
    }
}

void cartesianas_polares(float x, float y, float *r, float *theta){
    *r = sqrt(pow(x, 2) + pow(y, 2));
    *theta = atan2(y, x);
}

void polares_cartesianas(float r, float theta, float *x, float *y){
    *x = r*cos(theta);
    *y = r*sin(theta);
}