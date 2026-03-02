#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  FILE *file = fopen("poem.txt", "r");
  char buffer[100];
  // setting up my double pointer for the array of strings
  char **textArray;

  if (file == NULL) {
    printf("Error: File not found.\n");
    return 1;
  }

  // counting the number of lines by passing once through the file.
  int counter = 0;
  while (fgets(buffer, sizeof(buffer), file) != NULL) {
    counter++;
  }

  // I need to reset my pointer to the start of the file:
  fseek(file, 0, SEEK_SET);

  // allocate my string array
  textArray = calloc(counter, sizeof(char *));
  for (int i = 0; i < counter; i++) {
    // a char is always 1 byte.
    textArray[i] = calloc(100, 1);
  }

  int j = 0;
  while (fgets(buffer, sizeof(buffer), file) != NULL) {
    strcpy(textArray[j], buffer);
    j++;
  }

  for (int i = 0; i < counter; i++) {
    printf("Line %d: %s", i, textArray[i]);
  }

  fclose(file);
  return 0;
}