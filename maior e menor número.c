#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

int main () {
	setlocale(LC_ALL, "");
	int numero[5], menorNumero = INT_MAX, maiorNumero = INT_MIN;
	int i;
	
	printf("Digite o n�mero: \n");
	for(i = 0; i < 5; i++) {
		printf("N�mero %i�: ", i + 1);
		scanf("%i",&numero[i]);
		
		if (numero[i] > maiorNumero) {
			maiorNumero = numero[i];
		}
		if (numero[i] < menorNumero) {
			menorNumero = numero[i];
		}
	}
	
		for (i = 0; i < 5; i++) {
		printf("N�mero %i: %i\n", i + 1, numero[i]);
			
		}
		
		printf("\nO maior n�mero �: %i", maiorNumero);
		printf("\nO menor n�mero �: %i", menorNumero);
	
	return 0;
	
}
