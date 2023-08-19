#include <stdio.h>

int main()
{
    int x, y;
    printf("Indique o ponto (x,y): ");
    scanf("%d %d", &x, &y);
    if(x>0 && y>0)
        printf("O ponto encontra-se no 1o quadrante.\n");
    else if(x<0 && y>0)
        printf("O ponto encontra-se no 2o quadrante.\n");
    else if(x<0 && y<0)
        printf("O ponto encontra-se no 3o quadrante.\n");
    else if(x>0 && y<0)
        printf("O ponto encontra-se no 4o quadrante.\n");
}