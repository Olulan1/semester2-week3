
/*
* Factorial
*/

#include <stdio.h>

void factorial(int n) {
   if (n > 20) {
      printf("Larger than 20!, and will not be computed.");
   } else {
      int x = 1;
      for (int i = 1; i<n+1 ; i++) {
         x = x * i;
      }
      printf("%d! is equal to %lu.",n,x);
   }
}

int recFactorial(int n) {
   int x = 1;
   if (n == 1) {
      return 1;
   }
   return n * recFactorial(n-1);
}

int main( void ) {
   int f[20];
   int n;
   printf("Enter an int 1-20: ");
   (int) scanf("\n%d",&n);
   printf("The value of the int you entered is: %d\n",n);
   printf("The factorial of %d is: %lu\n",n, recFactorial(n));
   return 0;
}