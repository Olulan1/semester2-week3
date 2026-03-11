
#include <stdio.h>

int main( void ) {

    char charArray[5] = {'h','e','l','l','o'};
    char charString[] = "hello";
 
    printf("As array: %s\n",charArray);     // strange behaviour?
    printf("Length of array: %ld\n",sizeof(charArray));   // expected result

    printf("As string: %s\n",charString);   // normal behaviour
    printf("Length of string: %ld\n",sizeof(charString));   // includes silent character \O

    return 0;
}
