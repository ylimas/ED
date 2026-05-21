#include <stdio.h>

int main() {
// declaração de variaveis
	int num1;
	int num2;
	int num3;
	int soma;

// Entrada de  dados

	printf("\nDigite o primeiro número: ");
	scanf("%d", &num1);
	
	printf("\nDigite o segundo número: ");
	scanf("%d", &num2);
	
	printf("\nDigite o terceiro número: ");
	scanf("%d", &num3);

	printf("\n\nCalculando o resultado...\n\n");

	soma = num1 + num2 + num3;

	printf("O seu resultado é: %d", soma);

	return 0;
}
