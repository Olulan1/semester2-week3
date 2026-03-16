
/*
 * Sum of 2 vectors
 */

 #include <stdio.h>

 int main( void ) {
    float a[]={ 1.0,1.0,1.0,1.0,1.0 };
    float b[]={ 2.0,3.0,4.0,5.0,6.0 };
    float c[5];

    /*
    Code to compute the sum
    Store your answer in array c
    Print your final answer
    */

    int aLen = sizeof(a)/sizeof(a[0]);
    int bLen = sizeof(b)/sizeof(b[0]);
    for (int i = 0; i<aLen ; i++) {
      int marker = i+1;
      c[i] = a[i]+b[i];
      printf("Sum number %d: %.2f\n",marker,c[i]);
    }

    return 0;
 }
