#include<stdio.h>

//Aula 1 - Parte II
//Exemplo - Se/if

void main(){
	int idade;
	printf("Informe sua idade: ");
	scanf("%d",&idade);
	if(idade < 18 ){ //criação da da escolha: se idade for menor que 18 faça
		printf("Menor de idade"); //se for, imprima que é menor de idade
	}else{ 
		printf("Maior de idade"); //se não for, imprima que é maior de idade
	}
}
