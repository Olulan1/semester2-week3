
/*
 * Use the sizeof() operator to examine memory use 
 * of the pointer type
 */

#include <stdio.h>

int main( void ) {

    int *testIntPtr;
    double *testDoublePtr;

    printf("Int pointer size is %ld bytes\n",sizeof(testIntPtr));
    printf("Double pointer size is %ld bytes\n",sizeof(testDoublePtr));

    return 0;
}
