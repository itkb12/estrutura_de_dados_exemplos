#include<stdio.h>

//Aula 2 - Funcoes
//Exemplo 3

int square(int x){ //função que mostrará o valor ao quadrado do número inserido
	printf("Quadrado de %d = %d",x,x*x); //printf que calcula e imprime em tela o valor da número inserido ao quadrado
	return 0;
}

int main(){
	int num;
	printf("Coloque um numero: ");
	scanf("%d",&num); //pedindo para o usuário inserir um número que será alocado na variável
	square(num); //enviando o valor dessa variável para a função
	return 0;
}
