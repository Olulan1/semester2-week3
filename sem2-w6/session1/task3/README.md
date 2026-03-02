# Task 3: File I/O - Word Count

## Overview

Create a program that counts lines, words, and characters in a file (similar to the Unix `wc` command).

## Instructions

Create `word_count.c` that:

1. Opens a file specified on the command line
2. Counts the number of lines, words, and characters
3. Prints the results

## Usage

```bash
./word_count poem.txt
```

## Expected Output

```
  3 lines
  12 words
  72 characters
```

## Hints

- Use `fgetc()` to read character by character
- The `isspace()` function from `<ctype.h>` helps identify whitespace
- You don't need to store the file contents - count as you read
- A newline (`'\n'`) marks the end of a line
- A word ends when you encounter whitespace after non-whitespace

## Validation

Make sure to:

- Check if the file opened successfully
- Handle the case where no filename is provided
