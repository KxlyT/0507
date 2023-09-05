#include <stdio.h>

int main () {
	
	float preco_imovel;
	
	printf("Digite o preco do imovel: ");
	scanf("%f", &preco_imovel);
	
	if(preco_imovel <= 80,000.00){
		printf("Em promocao.\n");
	}
	else {
		printf("Preco normal.\n");
	}
	
	return 0;
}
