#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int area, raio;
	
	printf("Insira o raio do círculo-> ");
	scanf("%d", &raio);
	
	area = 3.14 * raio * raio;
	
	printf("\n\nA área do circulo é: %d", area);
	
	return 0;
}
