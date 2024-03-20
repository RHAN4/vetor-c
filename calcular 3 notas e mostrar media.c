#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

int main () {
	setlocale(LC_ALL, "");
	int nota[3], media = 0;
	int i, soma, contador = 0;
	
	printf("Digite as suas notas: \n");
	for(i = 0; i < 3; i++) {
		printf("Nota %iª: ", i + 1);
		scanf("%i",&nota[i]);
		
		soma += nota[i];
		contador++;
	}
	
	for (i = 0; i < 3; i++) {
	printf("Nota %i: %i\n", i + 1, nota[i]);
		
		}
		
	media = soma/contador;	
		
	printf("Média %i: ", media);
	
	return 0;
	
}
