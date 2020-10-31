/*
c041ng 8y Paradox

char *my_strlower(char *tab);
met la chaine de caractere en minuscule
*/
#include "../include/my_lib.h"

char *my_strlower(char *tab){
    for (int i = 0; i < my_strlen(tab); i++){
        if ('A' <= tab[i] && tab[i] <= 'Z')
            tab[i] = tab[i] + 32;
    }
    return (tab);
}
