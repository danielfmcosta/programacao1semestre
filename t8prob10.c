#include <stdio.h>
#include <string.h>

int main(){
    char frase[100], maior[100];
    int n=0, sum=0, iant=0, max=0, count=0, index=0, j=0;
    float med=0;
    printf("Frase? ");
    fgets(frase, 100, stdin);
    for(int i=0; i<strlen(frase); i++){
        if(frase[i]==' '){
            n++;
            sum=sum + (i-iant);
            iant=i;
            if(count>max){
                max=count;
                index =i-max;
            }
            count=0;
        }
        else{
            count++;
        }
    }
    if(count>max){
        max = count;
        index = strlen(frase)-max;
    }
    for(int i=index; i<index+max; i++){
        maior[j] = frase[i];
        j++;
    }
    maior[j]='\0';
    med=(float) sum/n;
    printf("Numero de palavras: %d\n", n+1);
    printf("Comprimento medio: %.1f\n", med);
    puts(maior);
}