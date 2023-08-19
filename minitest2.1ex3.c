#include <stdio.h>

int main()
{
    char l;
    float ux, uy, uz, vx, vy, vz, c;
    int contA = 0, contB = 0, contC = 0;
    while(1)
    {
        if(scanf(" %c", &l) != '\n'){
            if(l == 'A'){
                scanf("%f %f %f %f %f %f", &ux, &uy, &uz, &vx, &vy, &vz);
                printf("u + v = (%f, %f, %f)\n", ux+vx, uy+vy, uz+vz);
                contA++;
            }
            else if(l == 'B'){
                scanf("%f %f %f %f", &c, &ux, &uy, &uz);
                printf("c u = (%f, %f, %f)\n", ux*c, uy*c, uz*c);
                contB++;
            }
            else if(l == 'C'){
                scanf("%f %f %f %f %f %f", &ux, &uy, &uz, &vx, &vy, &vz);
                printf("u . v = %f\n", (ux*vx) + (uy*vy) + (uz*vz));
                contC++;
            }
            else
                break;
        }
    }
    printf("%d %d %d", contA, contB, contC);
}