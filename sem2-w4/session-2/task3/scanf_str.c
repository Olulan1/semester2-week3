
#include <stdio.h>

int main( void ) {
    char input[10];

    int count = scanf("%s",input);
    //int count = scanf("%9s",input);

    printf("Read %d value\n",count);
    printf("Values: %s\n",input);

    return 0;
}
