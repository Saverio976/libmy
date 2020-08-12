/*
c041ng 8y Paradox
*/
#include "../include/my_lib.h"

int my_chartoint(char c){
	if (c > 47 && c < 58)
		return (c - 48);
	else
		return (-1);
}
