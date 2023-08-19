#include <stdio.h>
#include <stdlib.h>

int hoursMin(int totalMins, int *hours, int *minutes);

int main(){
    int totalMins, *hours = malloc(sizeof(int)), *minutes = malloc(sizeof(int)), flag = 0;
    printf("Insira o total de minutos: ");
    scanf("%d", &totalMins);
    flag = hoursMin(totalMins, hours, minutes);
    if(flag==1){
        printf("%d minutos correspondem a %dh:%dm e e superior a 1 dia\n", totalMins, *hours, *minutes);
    }
    else{
        printf("%d minutos correspondem a %dh:%dm e nao e superior a 1 dia\n", totalMins, *hours, *minutes);
    }
}

int hoursMin(int totalMins, int *hours, int *minutes){
    printf("%d\n", totalMins);
    *hours = (int) totalMins/60;
    *minutes = (int) totalMins%60;
    if(*hours>24){
        return 1;
    }
    else{
        return 0;
    }
}