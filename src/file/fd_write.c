/*
c041ng By Paradox

int my_write_char(int fd, char c);
écrit un caractere à l'endroit du curseur

int my_write_str(int fd, char *tab);
écrit une chaine de caractere dans le ficher à l'endroit de curseur

int my_write_int(int fd, int number);
écrit un nombre dans le ficher à l'endroit de curseur
*/
#include "../include/my_lib.h"

int my_write_char(int fd, char c){
    return(write(fd, &c, 1));
}

int my_write_str(int fd, char *tab){
    return(write(fd, tab, my_strlen(tab)));
}

int my_write_int(int fd, int number){
    char tab[TAILLE_MAX];

    my_inttostr(number, tab);
    return(my_write_str(fd, tab));
}
