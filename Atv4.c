#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int area, raio;
	
	printf("Insira o raio do c�rculo-> ");
	scanf("%d", &raio);
	
	area = 3.14 * raio * raio;
	
	printf("\n\nA �rea do circulo �: %d", area);
	
	return 0;
}
