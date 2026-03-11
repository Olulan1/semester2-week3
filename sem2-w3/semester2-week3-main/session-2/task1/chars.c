
/*
 *  All char variables are also integers
 *  Some integers are also characters
 */

#include <stdio.h>
#include <math.h>

int main( void ) {
    char c = 'a';
    int k = 95;
    long int d = 23.1;
    double x = 23.5;
    double y = round(x * 100)/100;

    printf("Display char as char: %c\n",c);
    printf("Display char as int: %d\n",c);
    printf("Display int as int: %d\n",k);
    printf("Display int as char: %c\n",k);
    printf("Display char as long int: %ld\n", c);
    printf("Display float as char: %e\n", x);
    printf("Display float as char (rounded): %e\n", y);

    return 0;
}
