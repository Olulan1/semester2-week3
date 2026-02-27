
/*
 * Use the address and dereferencing operators on variables and pointers 
 * Display value and addres data via the variable and then via the pointer
 */

#include <stdio.h>

int main( void ) {

    float testFloat = 3.14;
    float *testFloatPtr;

    testFloatPtr = &testFloat;  // the float pointer (testFloatPtr) is set to the address of the float variable (testFloat)
    
    printf("The value of the float variable is  %f\n",testFloat);
    printf("The address of the float variable is  %p\n",&testFloat);

    printf("The value of the pointer is  %p\n",testFloatPtr);
    printf("The value that the pointer dereferences to is  %f\n",*testFloatPtr);

    return 0;
}
