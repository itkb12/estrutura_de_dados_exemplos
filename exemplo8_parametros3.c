#include<stdio.h>

//Aula 2 - Funcoes
//Exemplo de par�metros 3

int soma_dobro(int a,int b){ //fun��o que somar� o dobro das vari�veis
	int soma;
	a = 2*a; //a recebe a vezes 2
	b = 2*b; //o mesmo para b
	soma = a+b; //soma recebe o valor dobrado de a e b
	return (soma); //a fun��o retorna soma
}

int main(){
	int x,y,res;
	printf("Digite o primeiro numero: ");
	scanf("%d",&x);
	printf("Digite o segundo numero: ");
	scanf("%d",&y);
	res = soma_dobro(x,y); //res recebe o valor retornado do calculo feito na fun��o
	printf("\nA soma do dobro dos numeros e: %d",res);
	return 0;
}
