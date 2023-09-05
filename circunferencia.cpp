#include <stdio.h>

#define pi 3.14159

int main(){
	
	float raio, calc_circulo;
	
	printf("Digite o valor do raio da circunferencia: ");
	scanf("%f", &raio);
	
	calc_circulo = (pi*raio*raio);
	
	printf("Area = %fm^2", calc_circulo);
	
}

