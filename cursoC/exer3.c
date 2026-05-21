#include <stdio.h>
int main() {

// declaração de variaveis
	
	int num;
	int potencia;

// Entrada de  dados

	printf("\nDigite o número: ");
	scanf("%d", &num);

	printf("\n\nCalculando o resultado...\n\n");

//calculo
	potencia = num * num;

//Saída de dados
	printf("O seu resultado é: %d", potencia);

	return 0;
}
