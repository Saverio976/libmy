/*
c041ng 8y Paradox

unsigned long long int my_hard_pow(int nombre, int exposant);
calcul le nombre puissance exposant

int my_pow(int nombre, int exposant);
calcul le nombre puissance exposant
*/
#include "../include/my_lib.h"

unsigned long long int my_hard_pow(int nombre, int exposant){
    unsigned long long int result = 1;

    for (int i = 0; i < exposant; i++)
        result *= nombre;

    return (result);
}

int my_pow(int nombre, int exposant){
    int result = 1;

    for (int i = 0; i < exposant; i++)
        result *= nombre;

    return (result);
}
