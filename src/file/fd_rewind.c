/*
c041ng By Paradox
*/
#include "../include/my_lib.h"

int my_rewind(int fd){
    return (my_lseek(fd, 0, "SEEK_SET"));
}
