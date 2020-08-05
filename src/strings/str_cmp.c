/*
c041ng 8y Paradox
*/
#include "../include/my_lib.h"

int my_strcmp(char *tab1, char *tab2){
    int is_same = 0, i = 0;

    if (tab1 && tab2){
        if (my_strlen(tab1) == my_strlen(tab2)){
            for (int i = 0; i < my_strlen(tab1); i++){
                if (tab1[i] != tab2[i]){
                    is_same = 1;
                    break;
                }
            }
        }
        else{
            is_same = 1;
        }
        return (is_same);
    }
}
