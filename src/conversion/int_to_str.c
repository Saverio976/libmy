/*
c041ng 8y Paradox

char *my_inttostr(int number, char *tab);
transforme un nombre en une chaine de charactere
*/
#include "../include/my_lib.h"

char *my_inttostr(int number, char *tab){
    int i = 0;

    while (number){
        tab[i] = (number % 10) + 48;
        i++;
        number /= 10;
    }
    tab[i] = '\0';
    my_strrev(tab);

    return (tab);
}
