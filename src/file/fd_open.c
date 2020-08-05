/*
c041ng By Paradox
*/
#include "../include/my_lib.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int my_open(char *name_file, char *mode){
    if (!my_strcmp(mode, "r"))
        return (open(name_file, O_RDONLY));
    else if (!my_strcmp(mode, "w"))
        return (open(name_file, O_WRONLY | O_CREAT, S_IRUSR, S_IWUSR));
    else if (!my_strcmp(mode,"rw"))
        return (open(name_file, O_RDWR | O_CREAT, S_IRUSR, S_IWUSR));
    else
		return (-1);
}
