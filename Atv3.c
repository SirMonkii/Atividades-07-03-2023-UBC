#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float salario, novoSalario, taxa, aumento;
	
	printf("Insira o salário atual do funcionário-> R$");
	scanf("%f", &salario);
	
	printf("\nInsira a taxa de porcentagem de aumento deste salário-> ");
	scanf("%f", &taxa);
	
	aumento = salario * taxa/100;
	novoSalario = salario + aumento;

	printf("\n\nO aumento foi de R$%.2f. O novo salário será de R$%.2f", aumento, novoSalario);

	return 0;
}
