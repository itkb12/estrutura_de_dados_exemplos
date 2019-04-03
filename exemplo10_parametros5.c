#include<stdio.h>
#include<conio.h>

//Aula 2 - Funções
//Exemplo - Passagem de Parametro por referência 2
int troca(int *a, int *b){ //definição de ponteiros que receberão os valores do vetor
	int x;
	if(*a>*b){ //se a for maior que b, será trocado os valores
		x = *a;
		*a = *b;
		*b = x;
	}
}

void main(){
	int vet[9],i,j; //criando um vetor de 9 espaços
	printf("Ordenacao de vetor\n\n");
	for(i = 0;i <= 9;i++){ //um for para alocar valores a cada um dos espaços do vetor
		printf("Entre com o %do elemento: ",i+1);
		scanf("%d",&vet[i]);
	}
	for(i=0;i <=9;i++){ //o for passará várias vezes pelo mesmo valor, 
	                	//deixando-o intocável apenas se ele for o menor de todos os valores
		for(j=i+1;j<=9;j++){ //caso haja um valor maior, ele será substituído, assim organizando o vetor de menor pra maior
			troca(&vet[i],&vet[j]);
		}
	}
	
	for(i = 0;i <= 9;i++){ //mostrando todos os valores organizados
		printf("\n%do. elemento: %d",i+1,vet[i]);
	}
}
