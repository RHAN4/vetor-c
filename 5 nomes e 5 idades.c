#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

#define TAM 5

int main () {
	setlocale(LC_ALL, "");
	int i, idades[TAM];
	char nomes[TAM][50];
	
	
	for (i = 0; i < TAM; i++) {
	fflush(stdin);
	printf("Digite o nome: ", i + 1);
	scanf("%s",&nomes[i]);
	fflush(stdin);
	printf("Digite a idade: ", i + 1);
	scanf("%i",&idades[i]);
}
	for (i = 0; i < 5; i++) {
	printf("\nNome: %s", nomes[i]);
	
	printf("\nIdade: %i", idades[i]);
	
}
	

	return 0;	
}
