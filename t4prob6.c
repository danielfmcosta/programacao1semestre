#include <stdio.h>

int main(){
    int a, b, digit, i=0, j=0, counterA=1, counterB=1, flag = 1, k=0, A[10], B[10];
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    while(a){
        digit=a%10;
        A[i]=digit;
        a/=10;
        i++;
        counterA++;
        printf("%d, %d, %d\n", digit, i, counterA);
    }
    while(b){
        digit=b%10;
        B[j]=digit;
        b/=10;
        j++;
        counterB++;
        printf("%d, %d, %d\n", digit, j, counterB);
    }
    for(int l=0; l<counterA; l++){
        if(A[l]==B[k]){
            printf("%d, %d\n", A[l], B[k]);
            flag++;
            k++;
        }
    }
    if(flag == counterB){
        printf("Sim");
    }
    else{
        printf("Nao");
    }
}