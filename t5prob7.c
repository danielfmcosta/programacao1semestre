#include <stdio.h>

void multiEspecial(int n, int v1[], int v2[], int vRet[]);

int main(){
    int v1[6], v2[6], vRet[6], n;
    printf("Vetor 1: ");
    for(int i=0; i<5; i++){
        scanf("%d", &v1[i]);
    }
    printf("Vetor 2: ");
    for(int i=0; i<5; i++){
        scanf("%d", &v2[i]);
        n = i;
    }
    multiEspecial(n, v1, v2, vRet);
}
void multiEspecial(int n, int v1[], int v2[], int vRet[]){
    for(int i=0; i<=n; i++){
        vRet[i] = v1[i]*v2[n-i];
    }
    printf("Multiplicacao especial: {");
    for(int i=0; i<=n; i++){
        printf("%d ", vRet[i]);
    }
    printf("}");
}