#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int capicua(char * str);

int main(){
    char *str=calloc(21, sizeof(char));
    printf("Palavra? ");
    scanf("%s", str);
    if(capicua(str)==1){
        printf("Resultado: %s e capicua.\n", str);
    }
    else{
        printf("Resultado: %s nao e capicua.\n", str);
    }
    free(str);
}
int capicua(char *str){
    int n, k=0;
    char *str2=calloc(strlen(str), sizeof(char));
    n=strlen(str);
    for(int i=n; i>0; i--){
        str2[k]=str[i-1];
        k++;
    }
    str2[k]='\0';
    if(strcmp(str2, str) == 0){
        return 1;
    }
    else{
        return 0;
    }
    free(str2);
}