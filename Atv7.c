#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float A, B, C;
	
	printf("Digite o valor de A: ");
	scanf("%f", &A);
	
	printf("Digite o valor de B: ");
	scanf("%f", &B);
	
	printf("Digite o valor de C: ");
	scanf("%f", &C);
	
	float R, S, D;
	
	R = (A + B) * (A + B);
	
	S = (B + C) * (B + C);
	
	D = (R + S)/2;
	
	printf("\n\nD é igual a: %.1f", D);
	
	return 0;
}
