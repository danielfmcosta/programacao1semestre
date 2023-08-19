#include <stdio.h>
#include <math.h>

float distancia(float x1, float y1, float x2, float y2);

int main()
{
    float x1, y1, x2, y2, dist;
    printf("Quais as coordenadas do ponto 1? ");
    scanf("%f %f", &x1, &y1);
    printf("Quais as coordenadas do ponto 2? ");
    scanf("%f %f", &x2, &y2);
    dist = distancia(x1, y1, x2, y2);
    printf("A distancia entre os dois pontos e %.2f", dist);
}

float distancia(float x1, float y1, float x2, float y2)
{
    float dist = 0;
    dist = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
    return dist;
}