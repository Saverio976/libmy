/*
c041ng 8y Paradox

void my_strrev(char *tab)
met à l'envers la chaine de caractere
*/
#include "../include/my_lib.h"

void my_strrev(char *tab){
    char inv,inv_inv;
    int len = my_strlen(tab)-1;

    if (tab){
        for (int i = 0; i < (len+1)/2; i++){
            inv = tab[i];
            inv_inv = tab[len-i];
            tab[i] = inv_inv;
            tab[len-i] = inv;
        }
    }
}
