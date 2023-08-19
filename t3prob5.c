#include <stdio.h>
#include <math.h>

float distancia(float x1, float y1, float x2, float y2);

int main()
{
    float x1, y1, x2, y2, dist;
    int r1, r2;
    printf("Posicao (x, y) e raio da bola 1? ");
    scanf("%f %f %i", &x1, &y1, &r1);
    printf("Posicao (x, y) e raio da bola 2? ");
    scanf("%f %f %i", &x2, &y2, &r2);
    dist = distancia(x1, y1, x2, y2);
    if(dist <= (r1 + r2))
    {
        printf("As duas bolas estao em colisao.");
    }
    else
    {
        printf("As duas bolas nao estao em colisao.");
    }
}
float distancia(float x1, float y1, float x2, float y2)
{
    float dist = 0;
    dist = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
    return dist;
}