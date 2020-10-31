# libmy 8y Paradox #
*I'm not an expert: please judge constructively*.
*there may be a lot of spelling mistakes...*
*this version is translated in english by a translator*

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
**Explanation**:
    transforms a character into a number
**Parameter**:
    c : chariot
        the character to be transfomed
**RETURN VALUE**:
    the character if it could not be converted
    otherwise, the number


# int to str
```c
char *my_inttostr(int number, char *tab);
```
**Explanation**:
    transforms a number into a string of characters
**Parameter**:
    number :    int
                the number to be transformed
    tab :   char *
            the table where the number will be translated
**RETURN VALUE**:
    the address of the painting


# str to int
```c
int my_strtoint(char *tab);
```
**Explanation**:
    transforms a character string into a number
**Parameter**:
    tab :   char *
            the character string to be translated
**RETURN VALUE**:
    -1 if the string could not be translated
    otherwise, the number translated




# # # # GIRL

# closed
```c
int my_close(int fd);
```
**Explanation**:
    closes the file
**Parameter**:
    fd :    int
            le file descriptor
**RETURN VALUE**:
    -1 if there is a problem
    otherwise, 0


# delete
```c
int my_delete(char *file_name);
```
**Explanation**:
    deletes the file
**Parameter**:
    file_name : char *
                the file name
**RETURN VALUE**:
    -1 if there is an error
    otherwise, 0


# lseek
```c
int my_lseek(int fd, int number, char *mode);
```
**Explanation**:
    moves the read/write cursor of the file
**Parameter**:
    fd :    int
            le file descriptor
    number :    int
                number of byte to be added in addition to the position
    mode :  char *
            position to take as a starting point :
            - "SEEK_SET" : beginning of the file
            - "SEEK_CUR": Cursor position
            - "SEEK_END": end of file
**RETURN VALUE**:
    -1 if there is a problem
    otherwise, the number of bytes from the beginning to the new position

# open
```c
int my_open(char *name_file, char *mode);
```
**Explanation**:
    relates a file descriptor to a file
**Parameter**:
    name_file : char *
                file name
    mode :  char *
            the desired opening mode:
            - "r": read only
            - "w": write only (from the beginning of the file -> erase data)
            - "rw": reading and writing
            - "a": write only, but from the end of the file
**RETURN VALUE**:
    -1 if there is an error
    otherwise, the file descriptor

# readline
```c
int my_readline(int fd, char *tab, int max);
```
**Explanation**:
    reads a line from a file and puts it in the string
**Parameter**:
    fd :    int
            le file descriptor
    tab :   char *
            the place where the line will be read
    max :   int
            the maximum possible number of characters for tab
**RETURN VALUE**:
    -1 if there is a problem
    0 if end of file
    otherwise, a positive number


# readall
*may have errors when using this function*.
*do not use it at the moment, if possible*.
```c
int my_readall(int fd, char *tab, int max);
```
**Explanation**:
    reads the maximum possible characters (max) and puts them in tabs.
**Parameter**:
    fd :    int
            le file descriptor
    tab :   char *
            the character string in which the elements will be read
    max :   int
            the maximum number of characters to be read
**RETURN VALUE**:
    -1 if there was a problem
    otherwise, the number of byte read

# rename
*may be errors*
```c
int my_rename(char *old_name, char *new_name);
```
**Explanation**:
    rename the file not another name
**Parameter**:
    old_name :  char *
                the name of the file to be renamed
    new_name :  char *
                the new name for the file
**RETURN VALUE**:
    return 0 if the function went well

# rewind
```c
int my_rewind(int fd);
```
**Explanation**:
    moves the cursor to the beginning of the file
**Parameter**:
    fd :    int
            le file descriptor
**RETURN VALUE**:
    -1 if there was an error
    otherwise, the number of bytes from the beginning of the file to the new location: the beginning (so 0).

# write_char
```c
int my_write_char(int fd, char c);
```
**Explanation**:
    writes a character at the cursor position
**Parameter**:
    fd :    int
            le file descriptor
    c : char
        the character to be written
**RETURN VALUE**:
    -1 if there is an error
    otherwise, the number of byte writes

# write_str
```c
int my_write_str(int fd, char *tab);
```
**Explanation**:
    write a string in the file at the cursor position
**Parameter**:
    fd :    int
            the descriptor file
    tab :   char *
            the character string to write
**RETURN VALUE**:
    -1 if there is an error
    otherwise, the number of byte writes

# write_int
```c
int my_write_int(int fd, int number);
```
**Explanation**:
    writes a number in the file at the cursor position
**Parameter**:
    fd :    int
            the descriptor file
    number :    int
                the number to write
**RETURN VALUE**:
    -1 if there is an error
    otherwise, the number of byte writes




# # # NUMBER

# power (soft)
```c
int my_pow(int number, int exponent);
```
**Explanation**:
    calculates the exponent power number
**Parameter**:
    number :    int
                the number
    exhibitor : int
                the exhibitor
**RETURN VALUE**:
    the calculated number
    *attention, the returned number must be an int*.
    *if you think the returned number is going to be too big, use the my_hard_pow()* function.

# power (hard)
```c
unsigned long long int my_hard_pow(int number, int exponent);
```
**Explanation**:
    calculates the exponent power number
**Parameter**:
    number :    int
                the number
    exhibitor : int
                the exhibitor
**RETURN VALUE**:
    the calculated number
    *attention, the returned number is an 'unsigned long long int'*.




# # # STD.IN.OUT

# lecture_one
```c
void my_lecture_one(char *ptr_letter);
```
**Explanation**:
    read a character of stdin and put it at the pointer's pointing point
**Parameter**:
    ptr_letter :    char *
                    a pointer on a char
**RETURN VALUE**:
    void

# reading
```c
void my_lecture(char *tab, int size_max);
```
**Explanation**:
    read a maximum number of characters or up to a line break
**Parameter**:
    tab :   char *
            the character string
    max_size :  int
                the size of the table
**RETURN VALUE**:
    void

# print_char
```c
void print_char(char c);
```
**Explanation**:
    writes a character in stdout
**Parameter**:
    c : char
        the character to display
**RETURN VALUE**:
    void

# print_str
```c
void print_str(char *tab);
```
**Explanation**:
    write a string in stdout
**Parameter**:
    tab :   char *
            the character string
**RETURN VALUE**:
    void

# print_nb
```c
void print_nb(int number);
```
**Explanation**:
    writes a number in stdout
**Parameter**:
    number :    int
                the number to write
**RETURN VALUE**:
    void

# print1
```c
void print1(char *tab, void *ptr_parameter);
```
**Explanation**:
    writes a string with a variable inside::
    - %s: string of characters
    - %c : character
    - %d: number
**Parameter**:
    tab :   char *
            the character string containing an escape (see above)
    ptr_parameter : void *
                    a pointer to everything that points to the variable to be written in the string
**RETURN VALUE**:
    void




# # # STRINGS

# cat
```c
void my_strcat(char *tab1, char *tab2);
```
**Explanation**:
    concatene tab2 in tab1
**Parameter**:
    tab1 :  char *
            the string that will contain tab1 + tab2
    tab2 :  char *
            the string that will be added in tab1
**RETURN VALUE**:
    void

# chr
```c
char *my_strchr(char *tab, char letter);
```
**Explanation**:
    look for the first occurrence of a letter in a character string
**Parameter**:
    tab :   char *
            the character string in which to search
    letter :    char
                the character to be searched for
**RETURN VALUE**:
    NULL if there is no occurrence
    otherwise, a pointer to the spot where the occurence is located

# cmp
```c
int my_strcmp(char *tab1, char *tab2);
```
**Explanation**:
    compares two character strings
**Parameter**:
    tab1 :  char *
            a chain of character
    tab2 :  char *
            another character string
**RETURN VALUE**:
    1 if the two strings are not the same
    0 if they are

# cpy
```c
void my_strcpy(char *tab1, char *tab2);
```
**Explanation**:
    copy tab2 in tab1
**Parameter**:
    tab1 :  char *
            the character string where tab2 will be written
    tab2 :  char *
            the character string to be copied
**RETURN VALUE**:
    void

# only
```c
int my_strlen(char *tab);
```
**Explanation**:
    returns the number of characters in the table
**Parameter**:
    tab :   char *
            the character string
**RETURN VALUE**:
    the number of tab characters

# lower
```c
char *my_strlower(char *tab);
```
**Explanation**:
    puts the character string in lowercase
**Parameter**:
    tab :   char *
            the character string
**RETURN VALUE**:
    a pointer to the string of characters

# pbrk
```c
char *my_strpbrk(char *tab, char *letters);
```
**Explanation**:
    search for an occurrence of the first letter found among letters
**Parameter**:
    tab :   char *
            the character string to look for
    letters :   char *
                a character string containing the letters to be searched in tab
**RETURN VALUE**:
    NULL if no occurrence
    otherwise, a pointer to the first occurrence found

# rev
```c
void my_strrev(char *tab)
```
**Explanation**:
    put upside down the character string
**Parameter**:
    tab :   char *
            the chain of character
**RETURN VALUE**:
    void

# str
```c
char *my_strstr(char *tab1, char *tab2);
```
**Explanation**:
    search for a string of character tab2 in tab1
**Parameter**:
    tab1 :  char *
            a character string in which to search
    tab2 :  char *
            a string to search in tab1
**RETURN VALUE**:
    NULL if tab2 was not found
    otherwise, a pointer to the first letter of the occurrence found

# upper
```c
char *my_strupper(char *tab);
```
**Explanation**:
    puts the character string in capital letters
**Parameter**:
    tab :   char *
            the character string to be capitalized
**RETURN VALUE**:
    tab
