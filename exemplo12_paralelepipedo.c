#include<stdio.h>
#include<math.h> //adicionando uma biblioteca a mais

//Aula 2 - Fun��es
//Exemplo - Paralelep�pedo
//L = (a*a+b*b)^1/2
//D = (L*L+c*c)^1/2

float hipotenusa(float a, float b){ //fun��o que calcular� a raiz de 2 valores ao quadrado
	return sqrt(a*a+b*b); //sqrt � uma fun��o da bibilioteca math
}

void main(){
	float a,b,c,d;
	printf("Entre com A, B e C: \n");
	scanf("%f %f %f",&a,&b,&c);
	d= hipotenusa(hipotenusa(a,b),c); //d recebe o retorno da fun��o hipotenusa, passando como parametro ela mesma com dois valores diferentes
									  //a primeira hipotenusa vai calcular o L com os valores de a e b
									  //a segunda vai calcular o d, com os valores retornados do calculo de L e c
	printf("Diagonal = %2.2f",d);
}

