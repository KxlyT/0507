#include <stdio.h>
#include <locale.h>

#define ANO_ATUAL 2023

int main() {
	
	setlocale(0, "Portuguese");
	int ano_nascimento, idade;
	
	printf("Digite o ano de nascimento do nadador: ");
	scanf("%d", &ano_nascimento);
	
	idade = (ANO_ATUAL - ano_nascimento);
	
	if (idade < 5 || idade > 80)
		printf("Idade %d inv�lida", idade);
	else {
	
	
		switch(idade){
			case 5:
			case 6:
			case 7:
				printf("Nadador de %d anos � Infantil A", idade);
				break;
			case 8:
			case 9:
			case 10:
				printf("Nadador de %d anos � Infantil B", idade);
				break;
			case 11:
			case 12:
			case 13:
				printf("Nadador de %d anos � Juvenil A", idade);
				break;
			case 14:
			case 15:
			case 16:
			case 17:
				printf("Nadador de %d anos � Juvenil B", idade);
				break;
			default:
				printf("Nadador tem %d anos e � S�nior", idade);
		}
	}
}

