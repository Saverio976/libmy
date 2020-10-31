/*
c041ng 8y Paradox

char *my_strpbrk(char *tab, char *letters);
recherche une occurence de la première lettre trouvée parmis letters
*/
#include "../include/my_lib.h"

char *my_strpbrk(char *tab, char *letters){
    char *ptr = NULL;

    if (tab){
        for (int i = 0; i < my_strlen(tab); i++){
            for (int e = 0; e < my_strlen(letters); e++){
                if (tab[i] == letters[e]){
                    ptr = &(tab[i]);
                    return (ptr);
                }
            }
        }
    }
    return (ptr);
}
