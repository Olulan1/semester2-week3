
#include <stdio.h>
#include <stdlib.h>

// modify this code so that 'n' is a command-line argument
// we can then run the code for any chosen vector size

int main( void ) {
    int n=10;
    float *vec1 = calloc(n,sizeof(float));
    float *vec2 = calloc(n,sizeof(float));

    // initial data
    for( int k=0; k<n; ++k ) {
        vec1[k] = (float)k;
        vec2[k] = (float)(20-2*k);
    }

    // dot product
    float dot = 0.0;
    for( int k=0; k<n; ++k ) {
        dot += vec1[k]*vec2[k]; 
    }

    printf("Dot product = %f\n",dot);

    free(vec1);
    free(vec2);

    return 0;
}