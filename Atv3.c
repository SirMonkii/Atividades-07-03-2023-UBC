#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float salario, novoSalario, taxa, aumento;
	
	printf("Insira o sal�rio atual do funcion�rio-> R$");
	scanf("%f", &salario);
	
	printf("\nInsira a taxa de porcentagem de aumento deste sal�rio-> ");
	scanf("%f", &taxa);
	
	aumento = salario * taxa/100;
	novoSalario = salario + aumento;

	printf("\n\nO aumento foi de R$%.2f. O novo sal�rio ser� de R$%.2f", aumento, novoSalario);

	return 0;
}
