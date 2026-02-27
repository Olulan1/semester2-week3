
/*
 *  All char variables are also integers
 *  Some integers are also characters
 */

#include <stdio.h>

int main( void ) {
    char c = 'a';
    int k = 95;

    printf("Display char as char: %c\n",c);
    printf("Display char as int: %d\n",c);
    printf("Display int as int: %d\n",k);
    printf("Display int as char: %c\n",k);

    return 0;
}
