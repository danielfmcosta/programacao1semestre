#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAXSTRING 100
#define MAXREG 1000
#define ANO1 2019
#define ANO2 2017
#define PAIS1 "United States"
#define PAIS2 "Germany"
#define FICHEIRO "airports.txt"
#define NOMEFICHEIRO "US_airports.txt"

typedef struct{
    char nome[MAXSTRING];
    char local[MAXSTRING];
    char pais[MAXSTRING];
    int passageiros;
    int ano;
} aeroporto;

typedef struct{
    char string[MAXSTRING];
    float valor;
} resultado;

/****************************************************/
/*              Funcoes a implementar               */
/****************************************************/

float calcMedia(aeroporto *pa, int n, char *pais, int ano, char *nomeFicheiro){
    FILE *T;
    double sum=0, med=0, k=0;

    if(ano!=0){
        T = fopen(nomeFicheiro, "w");
        if(T == NULL){
            printf("Não foi possivel abrir um ficheiro!\n");
            return 1;
        }
        for(int i=0; i<n; i++){
            if (!strcmp(pa[i].pais,pais) && pa[i].ano==ano){
                sum = sum + pa[i].passageiros;
                k++;
                fprintf(T,"%s %d\n", pa[i].nome, pa[i].passageiros);
            }
        }
        med=sum/k;
        fclose(T);
    }
    else{
        for(int i=0; i<n; i++){
            if (!strcmp(pa[i].pais,pais)){
                sum = sum + pa[i].passageiros;
                k++;
            }
        }
        med=sum/k;
    }    

    return med;
}

/****************************************************/

int analisaPais(aeroporto *pa, int n, char *pais, int ano, resultado resultados[]){
    float var=0, aux; 
    int k=0, imin, pos=0, h=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(!strcmp(pa[i].pais, pais) && !strcmp(pa[i].nome, pa[j].nome) && pa[i].ano==ano && pa[j].ano==(ano+1)){
                var=((float) abs(pa[j].passageiros-pa[i].passageiros)/pa[i].passageiros)*100;
                strcpy(resultados[k].string, pa[i].nome);
                resultados[k].valor=var;
                k++;
            }
        }
    }
    while(pos < k-1){
        imin=pos;
        h=pos+1;
        while(h<k){    
            if(resultados[h].valor<resultados[imin].valor){
                imin=h;
            }
            h++;
        }
        if(imin != pos){
            aux=resultados[pos].valor;
            resultados[pos].valor=resultados[imin].valor;
            resultados[imin].valor=aux;
        }
        pos++;
    }

    return k;
}

/****************************************************/
/*     Funcoes ja implementadas (nao modificar)     */
/****************************************************/ 

int lerEntrada(char *ficheiro, aeroporto *pv, int n);
void imprimeAeroportos(const aeroporto v[], int n );

int main(){
    aeroporto pv[MAXREG]={0};
    int   i, n=0, num=0;
    float media=0.0;
    resultado result[MAXREG]={0};

    n = lerEntrada(FICHEIRO, pv, MAXREG);
    /*printf("\nEntradas lidas = %d\n", n);
    imprimeAeroportos(pv, n);*/

    media = calcMedia(pv, n, PAIS1, ANO1, NOMEFICHEIRO);
    printf("\nMedia de passageiros (%s, %d) = %.0f\n", PAIS1, ANO1, media);

    media = calcMedia(pv, n, PAIS1, 0, NULL);
    printf("\nMedia de passageiros (%s, global) = %.0f\n", PAIS1, media);

    num = analisaPais(pv, n, PAIS2, ANO2, result);
    printf("\nNumero de aeroportos (%s): %d\nVariação de passageiros entre %d e %d: \n", PAIS2, num, ANO2, ANO2+1);
    for (i = 0; i < num; i++){
        printf("\t %30s | %.2f%%\n", result[i].string, result[i].valor);
    }

    return 0;    
}

int lerEntrada(char *ficheiro, aeroporto *pv, int n)
{
    FILE *f;
    const char *sep = ";";
    char *token;
    char linha[1000]={0};
    int  i=0, linec=0;
    
    f = fopen(ficheiro, "r");
    if(f==NULL){
        return -1;
    }

    while(fgets(linha, sizeof(linha), f) !=NULL)
    {
        if(linec>n) {
            fclose(f);
            return -1;
        }

        token = strtok(linha, sep);
        strcpy(pv[linec].nome, token);
        token = strtok(NULL, sep);
        strcpy(pv[linec].local, token);
        token = strtok(NULL, sep);
        strcpy(pv[linec].pais, token);
        token = strtok(NULL, sep);
        pv[linec].passageiros = atoi(token);
        token = strtok(NULL, sep);
        pv[linec].ano = atoi(token);
        linec++;
    }
    fclose(f);

    return linec;
}

void imprimeAeroportos(const aeroporto v[], int n){
    int i;
    printf("Informação sobre Aeroportos na lista:\n");
    for(i=0; i<n;i++){
        printf("%50s | %50s | %20s | %10d | %d |\n",
            v[i].nome, v[i].local, v[i].pais, v[i].passageiros, v[i].ano);
    }
}