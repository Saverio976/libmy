/*
c041ng By Paradox
*/
#include "../include/my_lib.h"

int my_delete(char *file_name){
    return (unlink(file_name));
}
