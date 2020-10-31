/*
c041ng 8y Paradox

void my_lecture(char *tab, int taille_max);
lis un nombre max de caractère ou jusqu'à un retour à la ligne

void my_lecture_one(char *ptr_letter);
lis un caractère de stdin et le met à la ou pointe le pointeur
*/
#include "../include/my_lib.h"

void my_lecture(char *tab, int taille_max){
    char c=0, anti_n_in_tab=0;

    read(0, tab, taille_max);
    for (int i=0; i < taille_max; i++){
        if (tab[i] == '\n'){
            tab[i] = '\0';
            anti_n_in_tab=1;
        }
    }
    if (!anti_n_in_tab){
        while (c != '\n'){
            read(0, &c, 1);
        }
    }
}

void my_lecture_one(char *ptr_letter){
    int c = 0;
    read(0, ptr_letter, 1);

    while(c != '\n'){
        read(0, &c, 1);
    }
}
