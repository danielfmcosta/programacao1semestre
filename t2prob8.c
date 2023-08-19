#include <stdio.h>

int main()
{
    int ta, tb, n = 0;
    float pa, pb;
    printf("Pais A (pop/taxa): ");
    scanf("%f %i", &pa, &ta);
    printf("Pais B (pop/taxa): ");
    scanf("%f %i", &pb, &tb);
    while(pb <= pa)
    {
        pa = pa + (ta/100.0)*pa;
        pb = pb + (tb/100.0)*pb;
        n++;
    }
    printf("Populacao de B ultrapassara a de A em %i anos. ", n);
}