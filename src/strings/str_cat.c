/*
c041ng 8y Paradox
*/
#include "../include/my_lib.h"

void my_strcat(char tab1[], char tab2[]){
    int len_tab1 = my_strlen(tab1);
    int len_tab2 = my_strlen(tab2);

    if (tab1 && tab2){
        for (int i = 0; i < len_tab2; i++)
            tab1[len_tab1 + i] = tab2[i];
    }
}
