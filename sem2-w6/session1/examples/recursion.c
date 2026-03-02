#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
  // the base case - this dictates when the recursion should stop
  if (n == 0) {
    return 1;
  }

  return n * factorial(n - 1);
}

int main(void) {
  char buffer[100];
  int num = -1;

  while (num < 0) {
    printf("Enter a positive number: ");
    fgets(buffer, 100, stdin);
    int check = sscanf(buffer, "%d", &num);
    if (!check) {
      printf("Please enter numbers only.\n");
      num = -1;
    }
  }
  printf("%d! = %d\n", num, factorial(num));
}