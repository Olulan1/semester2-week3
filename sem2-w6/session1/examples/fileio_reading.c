#include <stdio.h>

int main() {
  FILE *file = fopen("poem.txt", "r");
  char buffer[100];

  if (file == NULL) {
    printf("Error: File not found.\n");
    return 1;
  }

  while (fgets(buffer, sizeof(buffer), file) != NULL) {
    printf("%s", buffer);
  }

  fclose(file);
  return 0;
}