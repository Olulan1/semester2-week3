
/*
 * Use the sizeof() operator to examine memory use 
 * of the pointer type
 */

#include <stdio.h>

int main( void ) {

    int *testIntPtr;

    printf("Int pointer size is %ld bytes\n",sizeof(testIntPtr));

    return 0;
}
