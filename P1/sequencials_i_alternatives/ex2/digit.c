#include "digit.h"
#include <stdbool.h>

bool es_digit(int n){
	bool resultat;
	if ((n>=0)&&(n<10)){
		resultat = true;}
	else{
		resultat = false;}
	return resultat;
}
