#include <stdio.h>

//#define percent_old 1.0
//#define percent_new 1.5

int main(){
	
	float ano_veiculo, valor_veiculo, valor_imposto, valor_desc;
	
	printf("Digite o ano de fabricacao do veiculo: ");
	scanf("%f", &ano_veiculo);
	
	printf("Digite o valor do veiculo: ");
	scanf("%f", &valor_veiculo);
	
	if(ano_veiculo < 1990){
		valor_desc = (valor_veiculo * 1.5/100);
		valor_imposto = (valor_veiculo - valor_desc);
		printf("Valor do imposto sera de R$%.2f", valor_imposto);
	}
	
	else{
		valor_desc = (valor_veiculo * 1/100);
		valor_imposto = (valor_veiculo - valor_desc);
		printf("Valor do imposto sera de R$%.2f", valor_imposto);
	}	
	
}
