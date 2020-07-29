/*
c041ng By Paradox
*/
#include "../include/my_lib.h"

int my_close(int fd){
    if (close(fd) == -1)
        return (1);
    return (0);
}
