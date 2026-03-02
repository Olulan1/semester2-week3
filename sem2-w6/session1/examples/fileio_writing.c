#include <stdio.h>

int main() {
  FILE *file = fopen("example.txt", "w");
  if (file == NULL) {
    printf("Error: File not found.\n");
    return 1;
  }
  fprintf(file, "Hello world!\n");
  fclose(file);
  return 0;
}