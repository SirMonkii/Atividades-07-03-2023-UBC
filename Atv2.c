#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float V1, V2, V3, V4, media;
	
	printf("Digite o valor da cota��o da primeira concession�ria-> R$");
	scanf("%f", &V1);
	
	printf("\nDigite o valor da cota��o da segunda concession�ria-> R$");
	scanf("%f", &V2);
	
	printf("\nDigite o valor da cota��o da terceira concession�ria-> R$");
	scanf("%f", &V3);
	
	printf("\nDigite o valor da cota��o da quarta concession�ria-> R$");
	scanf("%f", &V4);
	
	media = (V1 + V2 + V3 + V4)/4;
	
	printf("\n\nO valor m�dio da cota��o deste carro dentre essas concession�rias � R$%.2f", media);
		
	return 0;
}
