/*
c041ng By Paradox

int my_lseek(int fd, int number, char *mode);
déplace le curseur de lecture/écriture du fichier
*/
#include "../include/my_lib.h"
#include <sys/types.h>

int my_lseek(int fd, int number, char *mode){
    if (my_strcmp(mode, "SEEK_SET"))
        return (lseek(fd, number, SEEK_SET));
    if (my_strcmp(mode, "SEEK_CUR"))
        return (lseek(fd, number, SEEK_CUR));
    if (my_strcmp(mode, "SEEK_END"))
        return (lseek(fd, number, SEEK_END));
    return (-1);
}
