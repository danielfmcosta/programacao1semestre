#include <stdio.h>
#include <math.h>

float Q(int n);
float A(int n);

int main(){
    int n;
    float q, a;
    printf("Indique o valor de n? ");
    scanf("%d", &n);
    q = Q(n);
    a = A(n);
    printf("Q(%d)=%f e A(%d)=%f", n, q, n, a);
}

float Q(int n){
    float q = 0;
    for(int i=1; i<=n; i++){
        q = q + 1.0/pow(i, 2);
    }
    return q;
}

float A(int n){
    float a = 0;
    for(int i=1; i<=n; i++){
        a = a + (float) (pow(-1, i+1)/pow(2, i));
    }
    return a;
}