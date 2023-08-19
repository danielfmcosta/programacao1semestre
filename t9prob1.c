#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int aux, k=-1, kmax=0, sum=0, summax=0, t=0;
    char *straux=malloc(sizeof(char)), *smax=malloc(sizeof(char));
    while(straux[0]!='e'){
        scanf("%s", straux);
        for(int j=0; ; j++){
            int scanf_result = scanf("%d", &aux);
            if (scanf_result != 1) {
                break;
            }
            k++;
            sum += aux;
            printf("%d\n", k);
            printf("%d\n", aux);
            printf("%s\n", straux);
            printf("%d\n", (int) (straux[0]!='e'));
        }
        if(k>kmax){
            kmax=k;
        }
        if(sum>summax){
            t=1;
            summax=sum;
            strcpy(smax, straux);
        }
        sum=0;
        k=-1;
    }
    printf("Dia com mais tarefas: %d\n", t);
    printf("Dia com mais tarefas acabadas: %d\n", kmax);
    printf("Tarefa com mais trabalhadores: %s\n", smax);
}
