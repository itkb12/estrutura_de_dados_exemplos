#include<stdio.h>

//Aula 2 - Funcoes
//Exemplo de parametros 2

int prod(int x,int y){ //funcao que multiplicará os parametros
	return x*y; //retornando os parâmetros multiplicados para a função principal
}

int main(){
	int saida; 
	saida = prod(12,7); //a variável recebe o valor retornado pela função
	printf("A saida e %d\n",saida); //imprime o que está na variável saída
	return 0;
}
