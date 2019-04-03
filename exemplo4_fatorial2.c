#include<stdio.h>

//Aula 2 - Funcoes
//Exemplo 2

int fatorial(int n){
	int i,fat; 
	fat = 1; //inicializando a variavel fatorial com 1
	for(i=1;i<=n;i++){ 
		fat=fat*i; //multiplicando o valor de fatorial por i até chegar no valor desejado
	}
		return (fat); //retornando o valor do cálculo realizado na varíavel fatorial
}

int main(){
	int limite; 
	char tecla;
	printf("Calculo de fatorial\n");
	printf("Qual fatorial?");
	scanf("%d",&limite); //pedindo do usuário a variável que será feito o fatorial
	printf("Fatorial de %d = %d\n",limite,fatorial(limite)); //enviando a variável, e pedindo para mostrar o que é retornado
	printf("Tecle <ENTER> para finalizar");
	tecla = getche();
	return 0;
}
