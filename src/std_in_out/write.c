/*
c041ng 8y Paradox

void print_char(char c);
ecrit un caractere dans stdout

void print_str(char *tab);
ecrit une chaine de caractere dans stdout

void print_nb(int number);
ecrit un nombre dans stdout

void print1(char *tab, void *ptr_parametre);
ecrit une chaine de caractere avec à l'interieur une variable::
- %s : chaine de caractere
- %c : caractere
- %d : nombre
*/
#include "../include/my_lib.h"

void print_char(char c){
    write(1,&c,1);
}

void print_str(char *tab){
    write(1,tab,my_strlen(tab));
}

void print_nb(int number){
    char tab[MAX_SIZE_IN_LIB];
    my_inttostr(number, tab);
    print_str(tab);
}

void print1(char *tab, void *ptr_parametre){
    char *ptr_type_s = my_strstr(tab,"%s");
    char *ptr_type_n = my_strstr(tab,"%d");
    char *ptr_type_c = my_strstr(tab,"%c");
    int *ptr_sur_nb = ptr_parametre;
    for (int e = 0; tab[e]; e++){
        if (&(tab[e]) == ptr_type_c)
            print_char(tab[e]);
        else if (&(tab[e]) == ptr_type_n){
            ptr_sur_nb = ptr_parametre;
            print_nb(*ptr_sur_nb);
        }
        else if (&(tab[e]) == ptr_type_s)
            print_str(ptr_parametre);
        else{
            print_char(tab[e]);
            e--;
        }
        e++;
    }
}
