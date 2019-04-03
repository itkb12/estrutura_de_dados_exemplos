#include<stdio.h>

//Aula II - Funcoes
//Exemplo de Parâmetros 1

int mult(float a, float b, float c){ //função que multiplicará os valores enviados, recebendo 3 parâmetros
	printf("%f",a*b*c); //multiplicando os três valores e mostrando na tela
	return 0;
}

int main(){
	float x,y; //criando duas variáveis com valores reais
	x=23.5; //adicionando valores a essas variáveis sem pedir do usuário
	y=12.9;
	mult(x,y,3.87); //enviando as váriáveis e uma constante para a função
	return 0;
}
