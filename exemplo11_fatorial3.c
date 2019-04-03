#include<stdio.h>
#include<conio.h>

//Aula 2 - Funções
//Exemplo - Função recursiva para fatoriais

long fatorial(long numero){ //função que fará o fatorial
	if(numero <= 1) //se o numero passado for menor igual a 1, só será retornado 1
		return 1;
	else
		return numero*fatorial(numero-1);//caso não seja, o número multiplicará com calculo feito no fatorial que está sendo chamdo novamente
										 //até chegar a 1
}

void main(){
	int i;
	for(i=1;i<=10;i++) //será calculado 10 vezes o fatorial
		printf("%2d! = %1d\n", i, fatorial(i));	 //dependendo do valor de ir, deve dar um valor diferente
}
