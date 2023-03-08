#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int X, Y, Auxiliar;
	
	printf("Digite o valor de X: ");
	scanf("%d", &X);
	
	printf("Digite o valor de Y: ");
	scanf("%d", &Y);
	
	Auxiliar = X;
	
	X = Y;
	
	Y = Auxiliar;
	
	printf("\n\nX = %d | Y = %d", X, Y);
	
	
	return 0;
}
