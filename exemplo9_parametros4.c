#include<stdio.h>

//Aula 2 - Fun��es
//Exemplo - Passagem de par�metro por refer�ncia

int troca(int *a, int *b){ //fun��o recebendo o endere�o das vari�veis
	int x; //x ser� a vari�vel auxiliar
	x = *a; //x pegando o valor do endere�o da vari�vel
	*a = *b; //a pegando o valor de b
	*b = x; //b pegando o valor que estava em a
	return 0;
	
}

void main(){
	int n,k;
	printf("Digite dois valores: ");
	scanf("%d %d",&n,&k);
	printf("Antes da troca n = %d e k = %d\n",n,k);
	troca(&n,&k); //enviado as vari�veis pelo seu endere�o
	printf("Depois da troca n = %d e k = %d",n,k);
}
