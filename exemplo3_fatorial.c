#include<stdio.h>

//Aula 2 - Funcoes
//Exemplo 1

int fatorial(int n){ //criado a função fatorial
	int i,fat;
	fat = 1; //iniciando a variavel que receberá o fatorial fatorial com 1
	for(i=1;i<=n;i++){
		fat=fat*i; //multiplicando fatorial pelo valor de 1, que vai de 1 até o valor inserido pelo usuário
	}
		printf("Fatorial de %d = %d\n",n,fat); //demonstrando o resultado
		return 0;
}

int main(){
	int limite; 
	char tecla;
	printf("Calculo de fatorial\n");
	printf("Qual fatorial?");
	scanf("%d",&limite); //pedindo a váriável que vamos criar a fatorial
	fatorial(limite); //enviando o valor da variável para a função que fará o cálculo
	printf("Tecle <ENTER> para finalizar");
	tecla = getche();
	return 0;
}
