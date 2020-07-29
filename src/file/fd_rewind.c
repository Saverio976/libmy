/*
c041ng By Paradox
*/
#include "../include/my_lib.h"

int my_rewind(int fd, char *file_name, char *mode){
    my_close(fd);

    return (my_open(file_name, mode));
}
