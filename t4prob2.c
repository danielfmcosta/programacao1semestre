#include <stdio.h>
#include <math.h>

float seno(float x, float tolerancia);
float fact(float n);

int main()
{
    float x, senu, tolerancia;
    printf("Angulo (em radianos): ");
    scanf("%f", &x);
    printf("Tolerancia: ");
    scanf("%f", &tolerancia);
    senu = seno(x, tolerancia);
    printf("Seno do angulo e %f", senu);
}

float seno(float x, float tolerancia){
    float seno=0;
    for(int n = 1; n <= tolerancia; n++){
        seno = seno + pow(-1, n+1)*( pow(x, 2*n-1)/fact(2*n-1));
    }
    return seno;
}

float fact(float n){
    float factorial = 1, t;
    for(t = n; t > 1; t--){
    factorial = factorial * t;
    }
    return factorial;
}