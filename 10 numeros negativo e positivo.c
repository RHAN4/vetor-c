#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

#define TAM 10

int main () {
	setlocale(LC_ALL, "");
	int numero[TAM], i, soma = 0, negativo = 0;
	
	for (i = 0; i < TAM; i++) {
	printf("%iº número: ", i + 1);
	scanf("%i",&numero[i]);
	
	 if (numero[i] < 0) {
			negativo++; 
	} else {
		soma += numero[i];
	}
}
	printf("\nSoma dos positivos: %i", soma);
	printf("\nNúmeros negativos: %i", negativo);
	
	return 0;
}
