/*
c041ng 8y Paradox
*/
#include "../include/my_lib.h"

void my_strcpy(char tab1[], char tab2[]){
    int i = 0;
    if (tab1 && tab2){
        while (i < my_strlen(tab2)){
            tab1[i] = tab2[i];
            i++;
        }
        tab1[i] = '\0';
    }
}
