/*
c041ng By Paradox

int my_rewind(int fd);
déplace le curseur au début du fichier
*/
#include "../include/my_lib.h"

int my_rewind(int fd){
    return (my_lseek(fd, 0, "SEEK_SET"));
}
