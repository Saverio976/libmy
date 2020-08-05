/*s
c041ng 8y Paradox
*/
#include "../include/my_lib.h"

int my_strlen(char *tab){
    int nb_char = 0;

    if (tab){
        while (tab[nb_char])
            nb_char++;
    }
    return (nb_char);
}
