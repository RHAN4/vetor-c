#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>

int main () {
	setlocale(LC_ALL, "");
	int numero[6];
	int i, pares = 0, impares = 0;

	for(i = 0; i < 6; i++) {
		printf("Número %i: ", i + 1);
		scanf("%i",&numero[i]);
		
		if (numero[i] % 2 == 1) {
		impares++;
		} else if (numero[i] % 2 == 0) {
			pares++;
		}
	}
	
	for (i = 0; i < 6; i++) {
		printf("Número %i: %i\n", i + 1, numero[i]);
		
		}
		
		printf("\nQuantidade de impares: %d \n", impares);
		printf("\nQuantidade de pares: %d \n", pares);
		
	return 0;
}
