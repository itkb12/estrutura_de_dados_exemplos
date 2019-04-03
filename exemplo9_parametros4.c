#include<stdio.h>

//Aula 2 - Funções
//Exemplo - Passagem de parâmetro por referência

int troca(int *a, int *b){ //função recebendo o endereço das variáveis
	int x; //x será a variável auxiliar
	x = *a; //x pegando o valor do endereço da variável
	*a = *b; //a pegando o valor de b
	*b = x; //b pegando o valor que estava em a
	return 0;
	
}

void main(){
	int n,k;
	printf("Digite dois valores: ");
	scanf("%d %d",&n,&k);
	printf("Antes da troca n = %d e k = %d\n",n,k);
	troca(&n,&k); //enviado as variáveis pelo seu endereço
	printf("Depois da troca n = %d e k = %d",n,k);
}
