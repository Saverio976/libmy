/*
c041ng 8y Paradox

int my_strtoint(char *tab);
transforme une chaine de charactere en un nombre
*/
#include "../include/my_lib.h"

int my_strtoint(char *tab){
    int number = 0;
    int unite = 0;
    char lettre = '0';

    if (tab){
        for(int i = 0; lettre != '\0'; i++){
            lettre = tab[i];
            if (lettre > 47 && lettre < 58){
                unite = (my_strlen(tab) - i) - 1;
                number += (lettre - 48) * (my_pow(10, unite));
            }
        }
        if (number)
            return (number);
    }
    return (-1);
}
