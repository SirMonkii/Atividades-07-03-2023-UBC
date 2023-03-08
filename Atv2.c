#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float V1, V2, V3, V4, media;
	
	printf("Digite o valor da cotação da primeira concessionária-> R$");
	scanf("%f", &V1);
	
	printf("\nDigite o valor da cotação da segunda concessionária-> R$");
	scanf("%f", &V2);
	
	printf("\nDigite o valor da cotação da terceira concessionária-> R$");
	scanf("%f", &V3);
	
	printf("\nDigite o valor da cotação da quarta concessionária-> R$");
	scanf("%f", &V4);
	
	media = (V1 + V2 + V3 + V4)/4;
	
	printf("\n\nO valor médio da cotação deste carro dentre essas concessionárias é R$%.2f", media);
		
	return 0;
}
