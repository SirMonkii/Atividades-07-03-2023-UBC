#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int horasTrab, valorHorasTrab; 
	float salarioMin, salarioBruto, salarioLiquido, imposto;
	
	printf("Insira o valor do sal�rio m�nimo-> ");
	scanf("%f", &salarioMin);
	
	printf("Insira o tanto de horas trabalhadas-> ");
	scanf("%d", &horasTrab);
	
	valorHorasTrab = salarioMin/2;
	
	salarioBruto = horasTrab * valorHorasTrab;
	
	imposto = salarioBruto * 0.03;
	
	salarioLiquido = salarioBruto - imposto;
	
	printf("\n\nO seu sal�rio l�quido, depois de descontado os impostos ser� de R$%.2f", salarioLiquido);
	
	return 0;
}
