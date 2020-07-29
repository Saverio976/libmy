/*
c041ng By Paradox
*/
#include "../include/my_lib.h"
#include <sys/types.h>

int my_readlines(int fd, char *tab, int max){
    int i = 0;
    int n;
    char letter;
    while ((n = read(fd, &letter, 1)) && letter != '\n' && i < max-1){
        tab[i] = letter;
        i++;
    }
    tab[i] = '\0';

    return (n);
}

int my_readall(int fd, char *tab, int max){
    int i;
    i = read(fd, tab, max-1);
    if (i == 0){
        tab[max] = '\n';
    }
    else{
        tab[i] = '\0';
    }

    return (0);
}
