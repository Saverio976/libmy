/*
c041ng 8y Paradox

char *my_strupper(char *tab);
met la chaine de caractere en majuscule
*/
#include "../include/my_lib.h"

char *my_strupper(char *tab){
    for (int i = 0; i < my_strlen(tab); i++){
        if ('a' <= tab[i] && tab[i] <= 'z')
            tab[i] = tab[i] - 32;
    }
    return (tab);
}
