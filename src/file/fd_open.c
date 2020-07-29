/*
c041ng By Paradox
*/
#include "../include/my_lib.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int my_open(char *name_file, char *mode){
    if (my_strstr(mode, "r"))
        return (open(name_file, O_RDONLY));
    else if (my_strstr(mode, "w"))
        return (open(name_file, O_WRONLY | O_CREAT, S_IRUSR, S_IWUSR));
	else
		return (-1);
}
