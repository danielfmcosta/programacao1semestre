#include <stdio.h>

int procuraTodos(int v[], int N, int x, int posicoes[]);
void imprime_vetor(int v[], int n);

int main()
{
    int v[11] = {2, 4, 2, 4, 2};
    int N = 5, x = 4, posicoes[11], tam;
     
    tam = procuraTodos(v, N, x, posicoes);

    printf("vetor de saida: ");
    imprime_vetor(posicoes, tam);
    
}

int procuraTodos(int v[], int N, int x, int posicoes[]){
    int k=0;
    for(int i=0; i<N; i++){
        if(v[i]==x){
            posicoes[k]=i;
            k++;
        }
    }
    return k;
}

void imprime_vetor(int v[], int n)
{
    int i;
    printf("{");
    for(i=0; i<n; i++)
        printf(" %d", v[i]);
    printf(" }\n");
}