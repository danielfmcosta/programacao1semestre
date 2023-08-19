#include <stdio.h>
#include <string.h>

#define MAXP 100

typedef struct{
    char designação[12];
    char marca[9];
    char modelo[6];
    float preco;
    int quantidade;
}artigo;

int leArtigos(artigo armazem[], char *nomeFicheiro);
int totalArtigos(artigo armazem[], int n, char *marca, char *modelo);
void alertaArtigos(artigo armazem[], int n);
void ordenaArtigos(artigo armazem[], int n);

int main(){
    artigo armazem[MAXP];
    char *marca, *nomeFicheiro, *modelo;
    int n, k;
    n=leArtigos(armazem, "artigos.txt");
    k=totalArtigos(armazem, n, "SuperTV", "S-30");
    alertaArtigos(armazem, n);
    printf("%d %d\n", n, k);
}

int leArtigos(artigo armazem[], char *nomeFicheiro){
    FILE *f;
    int n=0;

    f = fopen(nomeFicheiro, "r");
    if(f == NULL)
		return 0;

    while((n<MAXP) && (scanf("%s %s %s %f %d", armazem[n].designação, armazem[n].marca, armazem[n].modelo, &(armazem[n].preco), &(armazem[n].quantidade)) != EOF)){
        n++;
    }
    fclose(f);
    return n;
}
int totalArtigos(artigo armazem[], int n, char *marca, char *modelo){
    int k=0;
    for(int i=0; i<n; i++){
        if(!strcmp(armazem[i].marca, marca) && !strcmp(armazem[i].modelo, modelo)){
            k=armazem[i].quantidade;
        }
    }
    return k;
}
void alertaArtigos(artigo armazem[], int n){
    for(int i=0; i<n; i++){
        if(armazem[i].quantidade < 10){
            printf("O produto nº%d tem um baixo stock.\n", i);
        }
    }
}
void ordenaArtigos(artigo armazem[], int n){
    int pos=0, i=0, imax=0, aux;
    while(pos < n-1){
        imax=pos;
        i=pos+1;
        while(i<n){
            if(armazem[i].quantidade>armazem[imax].quantidade){
                imax=i;
            }
            i++;
        }
        if(imax!=pos){
            aux=armazem[imax].quantidade;
            armazem[imax].quantidade=armazem[pos].quantidade;
            armazem[pos].quantidade=aux;
        }
    }
}