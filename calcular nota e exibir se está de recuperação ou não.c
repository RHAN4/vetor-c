#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

int main () {
	setlocale(LC_ALL, "");
	int nota[4], media = 0;
	int i, soma;
	
	printf("Digite as suas notas: \n");
	for(i = 0; i < 3; i++) {
		printf("Nota %iª: ", i + 1);
		scanf("%i",&nota[i]);
		
		soma += nota[i];
	}
	
	for (i = 0; i < 3; i++) {
	printf("Nota %i: %i\n", i + 1, nota[i]);
		
		}
		
	media = soma/=i;	
		
	printf("Média: %i", media);
	
	if(media >= 7) {
		printf("\nAprovado.");
	} else if (media >= 5) {
		printf("\nRecuperação.");
	} else {
		printf("\nReprovado.");
	}
	
	return 0;
	
}
