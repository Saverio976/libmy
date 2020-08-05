/*
c041ng By Paradox
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
