#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int pesoKg, pesoG, consumo1, consumo2, consumoTotal, resto;
	
	printf("Digite o peso total do saco de ração em kilos-> ");
	scanf("%d", &pesoKg);
	
	pesoG = pesoKg * 1000;
	
	printf("Digite quantas gramas o gato 1 come em um dia-> ");
	scanf("%d", &consumo1);
	
	printf("Digite quantas gramas o gato 2 come em um dia-> ");
	scanf("%d", &consumo2);
	
	consumoTotal = (consumo1 + consumo2)*5;
	
	resto = pesoG - consumoTotal;
	
	printf("\n\nO resto de ração que sobrará no pacote depois de cinco dias alimentado os dois gatos será de %d gramas", resto);
	
	return 0;
}
