#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define TENTATIVAS 6
#define MAX 100

void imprimeForca(int erros);
void carregaPalavras(char *ficheiro, char palavras[][MAX], int *tamanho);
void obfuscaPalavra(char* palavra, char *nova);
int letraNaPalavra(char a, char* palavra);
int revelaLetras(char letra, char *palavra, char *obfuscada);
int vencedor(char *p1, char *p2);
int joga(char *palavra, char *palavra_obfuscada);

int main()
{
	char *dados = "palavras.txt";
	char palavras[100][MAX];
	char palavra[MAX], palavra_obfuscada[MAX];
	char letra;
	int i, tamanho, contador;

	srand(time(NULL));

	 carregaPalavras(dados, palavras, &tamanho);
	if(tamanho != 0)
	{
		strcpy( palavra, palavras[rand()%tamanho]);
		obfuscaPalavra(palavra, palavra_obfuscada);
		printf("%s\n", palavra_obfuscada);
		contador = joga(palavra,palavra_obfuscada);

		if(contador < TENTATIVAS)
			printf("Parabens!\n");
		else
			printf("Game over... The word was %s\n",palavra);

	}

	return 0;
}

void imprimeForca(int erros)
{
	if (erros == 0)
	{
		printf ("	+------+\n");
		printf ("	|     |\n");
		printf ("	       |\n");
		printf ("	       |\n");
		printf ("	       |\n");
		printf ("	       |\n");
		printf ("	============\n");
	}
	else if (erros == 1)
	{
		printf ("	+------+\n");
		printf ("	|     |\n");
		printf ("	o     |\n");
		printf ("	       |\n");
		printf ("	       |\n");
		printf ("	       |\n");
		printf ("	============\n");
	}
	else if (erros == 2)
	{
		printf ("	+------+\n");
		printf ("	|      |\n");
		printf ("	o      |\n");
		printf ("	|      |\n");
		printf ("	       |\n");
		printf ("	       |\n");
		printf ("	============\n");
	}
	else if (erros == 3)
	{
		printf ("	+------+\n");
		printf ("	|      |\n");
		printf ("	o      |\n");
		printf ("  /|      |\n");
		printf ("	       |\n");
		printf ("	       |\n");
		printf ("	============\n");
	}
	else if (erros == 4)
	{
		printf ("	+------+\n");
		printf ("	|      |\n");
		printf ("	o      |\n");
		printf ("  /|\\    |\n");
		printf ("	       |\n");
		printf ("	       |\n");
		printf ("	============\n");
	}
	else if (erros == 5)
	{
		printf ("	+------+\n");
		printf ("	|      |\n");
		printf ("	o      |\n");
		printf ("  /|\\    |\n");
		printf ("  /       |\n");
		printf ("	       |\n");
		printf ("	============\n");
	}
	else if (erros == 6)
	{
		printf ("	+------+\n");
		printf ("	|      |\n");
		printf ("	o      |\n");
		printf ("  /|\\    |\n");
		printf ("  / \\    |\n");
		printf ("	       |\n");
		printf ("	============\n");
	}
}

void carregaPalavras(char *ficheiro, char palavras[][MAX], int *tamanho)
{
	FILE *f;
	*tamanho=0;
	f=fopen(ficheiro, "r");
	if(f==NULL){
		printf("Erro ao abrir o ficheiro\n");
	}
    while((*tamanho<MAX) && (fscanf(f, "%s", &palavras[*tamanho][0]) != EOF)){
        *tamanho += 1;
    }
	fclose(f);
}

void obfuscaPalavra(char* palavra, char *nova)
{
	int i = 0;

	strcpy(nova,palavra);
	while ( nova[i] != '\0' )
	{
		nova[i] = '*';
		i++;
	}
}

int letraNaPalavra(char a, char* palavra)
{
	int i = 0;
	while ( palavra[i] != '\0' )
	{
		if ( palavra[i] == a )
			return 1;
		i++;
	}
	return 0;
}

int revelaLetras(char letra, char *palavra, char *obfuscada)
{
	int j=0;
	char *straux=malloc(MAX*sizeof(char));
	strcpy(straux, obfuscada);
	for(int i=0; i<strlen(palavra); i++){
		if(letra==palavra[i]){
			straux[i]=palavra[i];
			j++;
		}
	}
	printf("%s\n", straux);
	strcpy(obfuscada, straux);
	if(!strcmp(obfuscada, palavra)){
		return -1;
	}
	return j;
}

int vencedor(char *p1, char *p2)
{
	if(strcmp(p1,p2)==0)
		return 1;
	else
		return 0;
}

int joga(char *palavra, char *palavra_obfuscada)
{
	int k=1, j;
	char letra;
	imprimeForca(0);
	while(k<TENTATIVAS){
		if(scanf("%c ", &letra)!=EOF){
			j=revelaLetras(letra, palavra, palavra_obfuscada);
			if(j==0){
				imprimeForca(k);
				k++;
			}else if (j<0)
			{
				return k;
			}
		}
		else{
			return 0;
		}
	}
	return k;
}