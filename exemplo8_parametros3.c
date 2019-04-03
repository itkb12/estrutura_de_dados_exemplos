#include<stdio.h>

//Aula 2 - Funcoes
//Exemplo de parâmetros 3

int soma_dobro(int a,int b){ //função que somará o dobro das variáveis
	int soma;
	a = 2*a; //a recebe a vezes 2
	b = 2*b; //o mesmo para b
	soma = a+b; //soma recebe o valor dobrado de a e b
	return (soma); //a função retorna soma
}

int main(){
	int x,y,res;
	printf("Digite o primeiro numero: ");
	scanf("%d",&x);
	printf("Digite o segundo numero: ");
	scanf("%d",&y);
	res = soma_dobro(x,y); //res recebe o valor retornado do calculo feito na função
	printf("\nA soma do dobro dos numeros e: %d",res);
	return 0;
}
