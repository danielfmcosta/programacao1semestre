#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Insira 3 numeros: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1<n2 && n1<n2){
        printf("%d ", n1);
        if(n2<n3){
            printf("%d ", n2);
            printf("%d\n", n3);
        }
        else{
            printf("%d ", n3);
            printf("%d\n", n2);
        }
    }
    else if(n2<n1 && n2<n3){
        printf("%d ", n2);
        if(n1<n3){
            printf("%d ", n1);
            printf("%d\n", n3);
        }
        else{
            printf("%d ", n3);
            printf("%d\n", n1);
        }
    }
    else if(n3<n1 && n3<n2){
        printf("%d ", n3);
        if(n1<n2){
            printf("%d ", n1);
            printf("%d\n", n2);
        }
        else{
            printf("%d ", n2);
            printf("%d\n", n1);
        }
    }
}