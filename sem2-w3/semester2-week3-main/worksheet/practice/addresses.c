
#include <stdio.h>

/*
 * Example using memory addresses
 */

int main( void ) {

    int k1 = 2.5;    // we define 2 integer variables
    int k2 =  -3.4;
    double k3 = k1;
    double tot = k1+k2;

    printf(" %p , %p\n",&k1,&k2);  // we print the memory addresses of both
    printf("K3: %lf", k3);
    printf("%lf", tot);

    // what can you deduce about the memory usage and memory layout from inspecting the addresses?

    return 0;
}