/*
c041ng 8y Paradox
*/
#include "../include/my_lib.h"

char *my_strstr(char tab1[], char tab2[]){
    char *ptr = NULL;

    if (tab1 && tab2){
        for (int i = 0; i < my_strlen(tab1); i++){
            for (int e = 0; e < my_strlen(tab2); e++){
                if (tab1[i+e] != tab2[e]){
                    break;
                }
                if (e == my_strlen(tab2)-1){
                    ptr = &(tab1[i]);
                    return (ptr);
                }
            }
        }
    }
    return (ptr);
}
