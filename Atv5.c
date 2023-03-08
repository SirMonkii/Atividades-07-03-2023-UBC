#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int anoNasc, anoAtual, idade, idade2012;
	
	printf("Insira o ano de nascimento-> ");
	scanf("%d", &anoNasc);
	
	printf("Insira o ano atual-> ");
	scanf("%d", &anoAtual);
	
	idade = anoAtual - anoNasc;
	
	idade2012 = 2012 - anoNasc;
	
	printf("\n\nA idade atual dessa pessoa é de %d, mas a sua idade em 2012 era %d", idade, idade2012);
	
	return 0;
}
