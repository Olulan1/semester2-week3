
/*
 * Dot product of 2 vectors
 */

 #include <stdio.h>

 int main( void ) {
    float a[]={ 1.0,1.0,1.0,1.0,1.0 };
    float b[]={ 2.0,3.0,4.0,5.0,6.0 };
    float d = 0;

    /*
    Code to compute the dot product
    Store your answer in d
    print your final answer
    */

    int aLen = sizeof(a)/sizeof(a[0]);
    int bLen = sizeof(b)/sizeof(b[0]);
    for (int i = 0; i<aLen ; i++) {
      int marker = i+1;
      d = d+(a[i]*b[i]);
      printf("Current equation: %.2f * %.2f\n",a[i],b[i]);
      printf("Current sum: %.2f\n",d);
    }
     printf("Dot product of a and b is: %.2f\n",d);

    return 0;
 }