/*
c041ng 8y Paradox

nt my_chartoint(char c);
transforme un charactere en nombre
*/
#include "../include/my_lib.h"

int my_chartoint(char c){
	if (c > 47 && c < 58)
		return (c - 48);
	else
		return (c);
}
