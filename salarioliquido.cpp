#include <stdio.h>

int main(){
	
	float valor_hora, hora_trabalho, desc_inss, salario_bruto, salario_desc_inss, salario_liquido;
	
	printf("Digite o valor da hora de trabalho do funcionario: ");
	scanf("%f", &valor_hora);
	
	printf("Digite o numero de horas trabalhadas mensalmente: ");
	scanf("%f", &hora_trabalho);
	
	printf("Digite o percentual de desconto de INSS: ");
	scanf("%f", &desc_inss);
	
	salario_bruto = (valor_hora * hora_trabalho);
	salario_desc_inss = (salario_bruto * desc_inss/100);
	salario_liquido = (salario_bruto - salario_desc_inss);
	
	printf("O salario liquido sera de R$%.2f", salario_liquido);
	
//	desc_inss/100 * salario_bruto
	
}
