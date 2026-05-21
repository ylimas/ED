#include <stdio.h>

//Faça um programa que leia três valores e apresente como resultado a soma dos quadrados dos valores lidos.

int main() {


//Declaração de Variáveis

	int num1;
	int num2;
	int num3;
	int soma;

//Entrada de Dados

	printf("\nInsira o primeiro número: ");
	scanf("%d", &num1);

	printf("\nInsira o segundo número: ");
	scanf("%d", &num2);
	
	printf("\nInsira o terceiro número: ");
	scanf("%d", &num3);
	
//processamento de dados

	soma = (num1 * num1) + (num2 * num2) + (num3 * num3);

//Saída de dados

	 printf("\n\nO resultado é %d", soma);


	return 0;
}
