#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;
    float raiz1, raiz2;
    printf("Introduza o valor de a: ");
    scanf("%f", &a);
    printf("Introduza o valor de b: ");
    scanf("%f", &b);
    printf("Introduza o valor de c: ");
    scanf("%f", &c);
    raiz1 = (-b + sqrt(pow(b, 2) - 4*a*c))/(2*a);
    raiz2 = (-b - sqrt(pow(b, 2) - 4*a*c))/(2*a);
    if((pow(b, 2) - 4*a*c) < 0){
        printf("Tem raizes complexas: %f+%fi e %f%fi", (-b/(2*a)), sqrt(-(pow(b, 2) - 4*a*c))/(2*a), -b/(2*a), -sqrt(-(pow(b, 2) - 4*a*c))/(2*a));
    }
    else if(raiz1 == raiz2){
        printf("Tem uma raiz dupla: %f", raiz1);
    }
    else{
        printf("As raizes sao: %f e %f", raiz1, raiz2);
    }
}