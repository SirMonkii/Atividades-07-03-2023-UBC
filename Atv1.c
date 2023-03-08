#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float valor;
	
	printf("Digite o valor do CD-> R$ ");
	scanf ("%f", &valor);
	
	float total;
	
	total = valor * 3;
	
	
	printf("\n\nO Total da compra de 3 CDs foi de: %.2f", total);
	return 0;
}
