#include<stdio.h>

//Aula 2 - Fun��es
//Exemplo - Procedimentos

void imprime(int numero){ //a fun��o s� ir� imprimir o valor pedido
						  //por isso, n�o necessita de nenhum retorno
						  //devido isso, o void � usado, ou seja, sem retorno
	printf("Numero %d\n",numero);
}

int main(){
	imprime(4); //o valor a ser imprimido ser� 4
	return 0;
}
