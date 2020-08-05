/*
c041ng 8y Paradox
*/
#include "../include/my_lib.h"

char *my_strchr(char *tab, char letter){
    char *ptr = NULL;

    if (tab){
        for (int i = 0; i < my_strlen(tab); i++){
            if (tab[i] == letter){
                ptr = &(tab[i]);
                return (ptr);
            }
        }
    }
    return (ptr);
}
