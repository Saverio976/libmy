/*
c041ng By Paradox

int my_readline(int fd, char *tab, int max);
lit une ligne d'un fichier et le met dans la chaine de caractere

int my_readall(int fd, char *tab, int max);
lit le maximum de caractere possible (max) et le met dans tab
*/
#include "../include/my_lib.h"
#include <sys/types.h>

int my_readline(int fd, char *tab, int max){
    int i = 0;
    int n;
    char letter;

    while ((n = read(fd, &letter, 1)) > 0 && i < max){
        if (letter == '\n'){
            tab[i] = letter;
            tab[i + 1] = '\0';
            return (n);
        }
        tab[i] = letter;
        i++;
    }
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

    return (i);
}
