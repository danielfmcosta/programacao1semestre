#include <stdio.h>

int fibonnaci(int n);

int main(){
    int n, fibo=0, k, l, j=0;
    printf("Pretende usar numero maximo de valores(1) ou valor maximo(2)? ");
    scanf("%d", &k);
    if(k==1){
        printf("Introduza um numero maximo de valores: ");
        scanf("%d", &n);
        printf("Sequencia: ");
        for(int i=0; i<n; i++){  
            fibo=fibonnaci(i);
            printf("%d, ", fibo);
        }
        printf("\n");
    }
    else if(k==2){
        printf("Introduza o valor maximo: ");
        scanf("%d", &l);
        printf("Sequencia: ");
        do{
            printf("%d, ", fibo);
            fibo=fibonnaci(j);
            j++;
        }while(fibo<l);
        printf("\n");
    }
    else{
        return 0;
    }
}

int fibonnaci(int n){
    int fib=0;
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        fib=fibonnaci(n-1)+fibonnaci(n-2);
        printf("%d\n", fib);
        return fib;
    }
}