/*
c041ng By Paradox

int my_rename(char *old_name, char *new_name);
renomme le fichier pas un autre nom
*/
#include "../include/my_lib.h"
#include <fcntl.h>

int my_rename(char *old_name, char *new_name){
    link(old_name, new_name);
    return (0);
}
