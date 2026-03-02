#include <stdio.h>
#include <string.h>

int main() {
  FILE *file = fopen("poem.txt", "r");
  char buffer[100];
  // This is a static allocation so I am overallocating memory - see
  // 'reading_into_dynamic_arrays.c' for how to do this dynamically.
  char textArray[10][100];

  if (file == NULL) {
    printf("Error: File not found.\n");
    return 1;
  }

  int counter = 0;
  while (fgets(buffer, sizeof(buffer), file) != NULL) {
    strcpy(textArray[counter], buffer);
    counter++;
  }

  for (int i = 0; i < 3; i++) {
    printf("Line %d: %s", i, textArray[i]);
  }

  fclose(file);
  return 0;
}