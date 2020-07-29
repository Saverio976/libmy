/*
c041ng 8y Paradox
*/
#include "../include/my_lib.h"

unsigned long long int my_pow(int nombre, int exposant){
    int result = 1;

    for (int i = 0; i<exposant; i++){
        result *= nombre;
    }

    return (result);
}
