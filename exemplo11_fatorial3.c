#include<stdio.h>
#include<conio.h>

//Aula 2 - Fun��es
//Exemplo - Fun��o recursiva para fatoriais

long fatorial(long numero){ //fun��o que far� o fatorial
	if(numero <= 1) //se o numero passado for menor igual a 1, s� ser� retornado 1
		return 1;
	else
		return numero*fatorial(numero-1);//caso n�o seja, o n�mero multiplicar� com calculo feito no fatorial que est� sendo chamdo novamente
										 //at� chegar a 1
}

void main(){
	int i;
	for(i=1;i<=10;i++) //ser� calculado 10 vezes o fatorial
		printf("%2d! = %1d\n", i, fatorial(i));	 //dependendo do valor de ir, deve dar um valor diferente
}
