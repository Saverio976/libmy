/*
c041ng By Paradox
*/
#include "../include/my_lib.h"

void my_write_one(int fd, char c){
    write(fd, &c, 1);
}

void my_write(int fd, char *tab){
    write(fd, tab, my_strlen(tab));
}
