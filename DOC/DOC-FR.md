# libmy \\ 8y Paradox
*je ne suis pas un expert : jugez de façon constructive svp*
*il se peut qu'il y ai beaucoup de fautes d'orthographe ...*

1) CONVERSION
2) FILE
3) NUMBER
4) STD_IN_OUT
5) STRINGS

# # # CONVERSION

# char to int
```c
int my_chartoint(char c);
```
**Expliquation**:
    transforme un charactere en nombre
**Parametre**:
    c : char
        le charactere à transfomer
**Renvoi**:
    le charactere si il n'a pu être converti
    sinon, le nombre


# int to str
```c
char *my_inttostr(int number, char *tab);
```
**Expliquation**:
    transforme un nombre en une chaine de charactere
**Parametre**:
    number :    int
                le nombre à transformer
    tab :       char *
                le tableau ou va être traduit le nombre
**Renvoi**:
    l'adresse du tableau


# str to int
```c
int my_strtoint(char *tab);
```
**Expliquation**:
    transforme une chaine de charactere en un nombre
**Parametre**:
    tab :   char *
            la chaine de charactere à traduire
**Renvoi**:
    -1 si la chaine de charactere n'a pu être traduit
    sinon, le nombre traduit




# # # FILE

# close
```c
int my_close(int fd);
```
**Expliquation**:
    ferme le fichier
**Parametre**:
    fd :    int
            le file descriptor
**Renvoi**:
    -1 si il y a un problème
    sinon, 0


# delete
```c
int my_delete(char *file_name);
```
**Expliquation**:
    supprime le fichier
**Parametre**:
    file_name : char *
                le nom de fichier
**Renvoi**:
    -1 si il y a une erreur
    sinon, 0


# lseek
```c
int my_lseek(int fd, int number, char *mode);
```
**Expliquation**:
    déplace le curseur de lecture/écriture du fichier
**Parametre**:
    fd :    int
            le file descriptor
    number :    int
                nombre de byte à ajouter en plus de la position
    mode :      char *
                position à prendre comme point de départ :
                    "SEEK_SET" : début du fichier
                    "SEEK_CUR" : position du curseur
                    "SEEK_END" : fin du fichier
**Renvoi**:
    -1 si il y a un problème
    sinon, le nombre de byte depuis le début jusqu'à la nouvelle position

# open
```c
int my_open(char *name_file, char *mode);
```
**Expliquation**:
    met en relation un file descriptor avec un fichier
**Parametre**:
    name_file : char *
                nom du fichier
    mode :      char *
                le mode d'ouverture voulu:
                    "r" : lecture seule
                    "w" : écriture seule (depuis le début du fichier -> efface les données)
                    "rw" : lecture et écriture
                    "a" : ecriture seulement , mais à partir de la fin du fichier
**Renvoi**:
    -1 si il y a une erreur
    sinon, le file descriptor

# readline
```c
int my_readline(int fd, char *tab, int max);
```
**Expliquation**:
    lit une ligne d'un fichier et le met dans la chaine de caractere
**Parametre**:
    fd :    int
            le file descriptor
    tab :   char *
            l'endroit où il y aura la ligne lu
    max :   int
            le nombre de charactere maximum possible pour tab
**Renvoi**:
    -1 si il y a un problème
    0 si fin du fichier
    sinon, un nombre positif


# readall
*peut avoir des erreur lors de l'utilisation de cette fonction*
*ne pas l'utiliser pour le moment, si possible*
```c
int my_readall(int fd, char *tab, int max);
```
**Expliquation**:
    lit le maximum de caractere possible (max) et le met dans tab
**Parametre**:
    fd :    int
            le file descriptor
    tab :   char *
            la chaine de caractere où il y aura les éléments lus
    max :   int
            le nombre maximum de caractere à lire
**Renvoi**:
    -1 si il y a eu un problème
    sinon, le nombre de byte lu

# rename
*peut y avoir des erreurs*
```c
int my_rename(char *old_name, char *new_name);
```
**Expliquation**:
    renomme le fichier pas un autre nom
**Parametre**:
    old_name :  char *
                le nom du fichier à renommer
    new_name :  char *
                le nouveau nom pour le fichier
**Renvoi**:
    renvoi 0 si la fonction s'est bien déroulée

# rewind
```c
int my_rewind(int fd);
```
**Expliquation**:
    déplace le curseur au début du fichier
**Parametre**:
    fd :    int
            le file descriptor
**Renvoi**:
    -1 si il y a eu une erreur
    sinon, le nombre de byte de puis le début du fichier, jusqu'à le nouveau endroit : le début (donc 0)

# write_char
```c
int my_write_char(int fd, char c);
```
**Expliquation**:
    écrit un caractere à l'endroit du curseur
**Parametre**:
    fd :    int
            le file descriptor
    c :     char
            le caractere à écrire
**Renvoi**:
    -1 si il y a une erreur
    sinon, le nombre de byte écrit

# write_str
```c
int my_write_str(int fd, char *tab);
```
**Expliquation**:
    écrit une chaine de caractere dans le ficher à l'endroit de curseur
**Parametre**:
    fd :    int
            le file descriptor
    tab :   char *
            la chaine de caractere à écrire
**Renvoi**:
    -1 si il y a une erreur
    sinon, le nombre de byte écrit

# write_int
```c
int my_write_int(int fd, int number);
```
**Expliquation**:
    écrit un nombre dans le ficher à l'endroit de curseur
**Parametre**:
    fd :    int
            le file descriptor
    number :    int
                le nombre à écrire
**Renvoi**:
    -1 si il y a une erreur
    sinon, le nombre de byte écrit




# # # NUMBER

# power (soft)
```c
int my_pow(int nombre, int exposant);
```
**Expliquation**:
    calcul le nombre puissance exposant
**Parametre**:
    nombre :    int
                le nombre
    exposant :  int
                l'exposant
**Renvoi**:
    le nombre calculé
    *attention, le nombre retourné doit être un int*
    *si vous pensez que le nombre renvoyé va être trop grand, utiliser la fonction my_hard_pow()*

# power (hard)
```c
unsigned long long int my_hard_pow(int nombre, int exposant);
```
**Expliquation**:
    calcul le nombre puissance exposant
**Parametre**:
    nombre :    int
                le nombre
    exposant :  int
                l'exposant
**Renvoi**:
    le nombre calculé
    *attention, le nombre renvoyé est un 'unsigned long long int'*




# # # STD.IN.OUT

# lecture_one
```c
void my_lecture_one(char *ptr_letter);
```
**Expliquation**:
    lis un caractère de stdin et le met à la ou pointe le pointeur
**Parametre**:
    ptr_letter :    char *
                    un pointeur sur un char
**Renvoi**:
    void

# lecture
```c
void my_lecture(char *tab, int taille_max);
```
**Expliquation**:
    lis un nombre max de caractère ou jusqu'à un retour à la ligne
**Parametre**:
    tab :   char *
            la chaine de caractere
    taille_max :    int
                    la taille du tableau
**Renvoi**:
    void

# print_char
```c
void print_char(char c);
```
**Expliquation**:
    ecrit un caractere dans stdout
**Parametre**:
    c : char
        le caractere à afficher
**Renvoi**:
    void

# print_str
```c
void print_str(char *tab);
```
**Expliquation**:
    ecrit une chaine de caractere dans stdout
**Parametre**:
    tab :   char *
            la chaine de caractere
**Renvoi**:
    void

# print_nb
```c
void print_nb(int number);
```
**Expliquation**:
    ecrit un nombre dans stdout
**Parametre**:
    number :    int
                le nombre à écrire
**Renvoi**:
    void

# print1
```c
void print1(char *tab, void *ptr_parametre);
```
**Expliquation**:
    ecrit une chaine de caractere avec à l'interieur une variable::
    - %s : chaine de caractere
    - %c : caractere
    - %d : nombre
**Parametre**:
    tab :   char *
            la chaine de caractere contenant un escape (voir les escape plus haut)
    ptr_parametre : void *
                    un pointeur sur tout qui pointe sur la variable à écrire dans la chaine de caractere
**Renvoi**:
    void




# # # STRINGS

# cat
```c
void my_strcat(char *tab1, char *tab2);
```
**Expliquation**:
    concatene tab2 dans tab1
**Parametre**:
    tab1 :  char *
            la chaine de caractere qui va contenir tab1 + tab2
    tab2 :  char *
            la chaine de caractere qui va être ajoutée dans tab1
**Renvoi**:
    void

# chr
```c
char *my_strchr(char *tab, char letter);
```
**Expliquation**:
    cherche la première ocurence d'une lettre dans une  chaine de caractere
**Parametre**:
    tab :   char *
            la chaine de caractere dans laquelle rechercher
    letter :    char
                le caractere à rechercher
**Renvoi**:
    NULL si il n'y a pas d'occurence
    sinon, un pointeur sur l'endoit où se trouve l'occurence

# cmp
```c
int my_strcmp(char *tab1, char *tab2);
```
**Expliquation**:
    compare deux chaines de caractere
**Parametre**:
    tab1 :  char *
            une chaine de caractere
    tab2 :  char *
            une autre chaine de caractere
**Renvoi**:
    1 si les deux chaines de caractere ne sont pas pareille
    0 si elles le sont

# cpy
```c
void my_strcpy(char *tab1, char *tab2);
```
**Expliquation**:
    copie tab2 dans tab1
**Parametre**:
    tab1 :  char *
            la chaie de caractere où sera ecrit tab2
    tab2 :  char *
            la chaine de caractere à copier
**Renvoi**:
    void

# seulement
```c
int my_strlen(char *tab);
```
**Expliquation**:
    renvoi le nombre de caractere du tableau
**Parametre**:
    tab :   char *
            la chaine de caractere
**Renvoi**:
    le nombre de caractere de tab

# lower
```c
char *my_strlower(char *tab);
```
**Expliquation**:
    met la chaine de caractere en minuscule
**Parametre**:
    tab :   char *
            la chaine de caractere
**Renvoi**:
    un pointeur sur la chaine de caractere

# pbrk
```c
char *my_strpbrk(char *tab, char *letters);
```
**Expliquation**:
    recherche une occurence de la première lettre trouvée parmis letters
**Parametre**:
    tab :   char *
            la chaine de caractere dnas laquelle cherrcher
    letters :   char *
                une chaine de caractere contenant les lettres qu'il faut rechercher dans tab
**Renvoi**:
    NULL si aucune occurence
    sinon, un pointeur sur la première occurence trouvée

# rev
```c
void my_strrev(char *tab)
```
**Expliquation**:
    met à l'envers la chaine de caractere
**Parametre**:
    tab :   char *
            la chaine de caractere
**Renvoi**:
    void

# str
```c
char *my_strstr(char *tab1, char *tab2);
```
**Expliquation**:
    recherche une une chaine de caractere tab2 dans tab1
**Parametre**:
    tab1 :  char *
            une chaine de caractere dans laquelle rechercher
    tab2 :  char *
            une chaine de caractere à rechercher dans tab1
**Renvoi**:
    NULL si tab2 n'a pas été trouvée
    sinon, un pointeur sur la première lettre de l'occurence trouvée
    f
# upper
```c
char *my_strupper(char *tab);
```
**Expliquation**:
    met la chaine de caractere en majuscule
**Parametre**:
    tab :   char *
            la chaine de caractere à mettre en majuscule
**Renvoi**:
    tab
