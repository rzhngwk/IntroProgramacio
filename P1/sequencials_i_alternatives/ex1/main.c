#include <stdio.h>
#include <assert.h>
#include "ultim_digit.h"

int main(void){
	int numero;
	printf("Escriu el teu numero: ");
	if (scanf("%d", &numero)==1){
		printf("L'últim digit és: %d\n", calcular_ultim_digit(numero));} 
	else {
	printf("L'entrada no és vàlida\n");}

	return 0;
}
