#include <stdio.h>
#include <stdlib.h>

#define m 10

struct filainteiro
{
	int comeco, fim;
	int elem[m];
};

void iniciafila(struct filainteiro *fila)
{
	fila->comeco = 0;
	fila->fim =  -1;
}

void inserir(struct filainteiro *fila, int x)
{
	if(fila->fim == m - 1)
		printf("Fila está lotada, aguarde... \n");
	else
	{
		fila->fim++;
		fila->elem[fila->fim] = x;
	}
}
void consultar(struct filainteiro *fila)
{
    	int i = 0;
    	if(fila->fim < fila->comeco)
		printf("Fila vazia \n");
	else
	{
    		while(i < m)
		{
			printf(" Todos os elementos:  %d \n", fila->elem[i]);
			i++;
		}
	}
}

void consultarComecoFila(struct filainteiro *fila)
{
    int i = 0;
	printf("Lista o primeiro elemento da fila : %d \n", fila->elem[fila->comeco]);
}

void remover(struct filainteiro *fila){
	if(fila->fim < fila->comeco)
		printf("fila Vazia\n");
	else
		fila->comeco++;
}
void esvaziar(struct filainteiro *fila){
	if(fila->fim < fila->comeco)
		printf("fila Vazia\n");
	else
	{
		int i;
		for (i = 0; i < m; ++i)
		{
			fila->fim--;
		}
	}
}
int main()
{
	int i;
	struct filainteiro fila;
	int x;
	iniciafila(&fila);
	for(i = 0; i < m; i++)
	{		
		printf("Digite um número:  \n");
		scanf("%d", &x);
		inserir(&fila, x);
	}
	//remover(&fila);
	consultar(&fila);
	esvaziar(&fila);
	consultar(&fila);
	//consultarComecoFila(&fila);
	return 0;
}

