#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSTR 20
#define MAXV 50

/****************************************************/
/*              Funcoes a implementar               */
/****************************************************/

int guardaUsernamesPasswords(char usernames[][MAXSTR], char passwords[][MAXSTR])
{
    int i=0, k=0;
    char *straux1=malloc(MAXSTR*sizeof(char));
    char *straux2=malloc(MAXSTR*sizeof(char));
    while(i<MAXV){
        scanf("%s", straux1);
        scanf("%s", straux2);
        if(strlen(straux2)>=10){
            strcpy(&usernames[k][0], straux1);
            strcpy(&passwords[k][0], straux2);
            k++;
        }
        i++;
    }
    return k;
}

int passwordMaisSegura(char usernames[][MAXSTR], char passwords[][MAXSTR], int n, int *max_forca, int *pos)
{    
    int nC=0, F=0, tam=0, k=0;
    for(int i=0; i<n; i++){
        if(strstr(passwords[i],usernames[i])==NULL){
            k++;
            for(int j=0; j<strlen(passwords[i]); j++){
            if(!((passwords[i][j] >= 'a' && passwords[i][j] <= 'z') || (passwords[i][j] >= 'A' && passwords[i][j] <= 'Z') || (passwords[i][j] >= '0' && passwords[i][j] <= '9'))){
                nC++;
            }
            }
            tam=strlen(passwords[i]);
            F=tam+nC;
            printf("%d %d %d\n", F, tam, nC);
            printf("%s\n", passwords[i]);
            if(F>*max_forca){
                *max_forca=F;
                *pos=i;
            }
            nC=0;
            tam=0;
        }
    }
    return k;
}

/****************************************************/
/*     Funcoes ja implementadas (nao modificar)     */
/****************************************************/ 

int main() {
    char passwords[MAXV][MAXSTR]={0}, usernames[MAXV][MAXSTR]={0};
    int max_forca=0, pos;
    int  n=0, pwd_val=0, i;

    n = guardaUsernamesPasswords(usernames, passwords);
    if(n > 0){
        printf("\nForam processadas %d entradas:\n", n);
        for(i = 0; i < n; i++){
            if(i < 2 || i > n - 3) printf("%s  -  %s\n", usernames[i], passwords[i]);
            else if(i == 2) printf("...\n");
        }
    }
    else {
        printf("\nForam processadas 0 passwords\n\n");
        return 1;
    }
    
    pwd_val = passwordMaisSegura(usernames, passwords, n, &max_forca, &pos);
    printf("\n%d passwords validas\n\n", pwd_val);
    printf("%s e' a password mais segura (forca = %d)\n\n", passwords[pos], max_forca);   

    return 0;
}

