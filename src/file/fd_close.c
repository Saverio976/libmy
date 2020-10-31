/*
c041ng By Paradox

int my_close(int fd);
ferme le fichier
*/
#include "../include/my_lib.h"

int my_close(int fd){
    return (close(fd));
}
