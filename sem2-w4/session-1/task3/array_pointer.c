
/*
 * Features of arrays and pointers, stack and heap memory
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main( void ) {
    float a_stack[5];                          // stack array of size 5
    float *b_heap = calloc(5,sizeof(float));   // heap array of size 5

    // both can be indexed as arrays in the same way
    for( int k=0; k<5; ++k ) {
        a_stack[k] = 1.0;
        b_heap[k] = 1.0;
    }

    // both store the memory location of the start of the array
    printf("Stack memory location for a_stack: %p\n", a_stack);
    printf("Heap memory for b_heap: %p\n", b_heap);

    free(b_heap);
    return 0;
 }