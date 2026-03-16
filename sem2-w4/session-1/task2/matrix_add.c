
/*
 * Sum of 2 matrices
 */

 #include <stdio.h>

 int main( void ) {
   float a[4][4];
   float b[4][4];
   float c[4][4];

   int aLen = sizeof(a)/sizeof(a[0]);
   int bLen = sizeof(b)/sizeof(b[0]);
   /*
   Intialise the matrix a and b entries to 1.
   */
   for (int i=0;i<aLen;i++) {
      for (int j=0;j<bLen;j++) {
         a[i][j] = 1;
         b[i][j] = 1;
      }
   }
   /* 
   Write code to compute the sum.
   Store your answer in matrix c
   */
   for (int i=0;i<aLen;i++) {
      for (int j=0;j<bLen;j++) {
         float sum = a[i][j] + b[i][j];
         c[i][j] = sum;
      }
   }
   /*
   Print your final answer
   */
  int cLen = sizeof(c)/sizeof(c[0]);
  int cCOL = sizeof(c[0])/sizeof(c[0][0]);

  for (int i=0;i<aLen;i++) {
      for (int j=0;j<cCOL;j++) {
         int iM = i+1;
         int jM = j+1;
         printf("The value at [%d,%d] in matrix C is %.2f\n",iM,jM,c[i][j]);
      }
   }
   return 0;
 }
