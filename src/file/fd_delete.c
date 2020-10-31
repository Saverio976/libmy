/*
c041ng By Paradox

int my_delete(char *file_name);
supprime le fichier
*/
#include "../include/my_lib.h"

int my_delete(char *file_name){
    return (unlink(file_name));
}
