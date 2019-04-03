#include<stdio.h>

//Aula 2 - Funções
//Exemplo - Procedimentos

void imprime(int numero){ //a função só irá imprimir o valor pedido
						  //por isso, não necessita de nenhum retorno
						  //devido isso, o void é usado, ou seja, sem retorno
	printf("Numero %d\n",numero);
}

int main(){
	imprime(4); //o valor a ser imprimido será 4
	return 0;
}
