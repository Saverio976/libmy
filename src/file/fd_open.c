/*
c041ng By Paradox

int my_open(char *name_file, char *mode);
met en relation un file descriptor avec un fichier
*/
#include "../include/my_lib.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int my_open(char *name_file, char *mode){
    int fd = -1;
    if (!my_strcmp(mode, "r"))
        fd = open(name_file, O_RDONLY);
    if (!my_strcmp(mode, "w"))
        fd = open(name_file, O_WRONLY | O_CREAT, S_IRUSR, S_IWUSR);
    if (!my_strcmp(mode,"rw"))
        fd = open(name_file, O_RDWR | O_CREAT, S_IRUSR, S_IWUSR);
    if (!my_strcmp(mode, "a"))
    	fd = open(name_file, O_WRONLY | O_APPEND, O_CREAT, S_IRUSR, S_IWUSR);
    return (fd);
}
