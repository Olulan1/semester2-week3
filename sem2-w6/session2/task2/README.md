# Task 2: Unit Testing with assert()

## Overview

Write unit tests for the provided `is_palindrome()` function using `assert()`.

## Instructions

1. Open `1_tests.c`
2. The `is_palindrome()` function is already implemented
3. Add `assert()` statements in `main()` to test the function

## What to Test

Consider testing:

- Obvious palindromes: "racecar", "madam", "level"
- Single characters: "a"
- Empty string: ""
- Non-palindromes: "hello", "world"
- Even-length palindromes: "abba"
- Edge cases: case sensitivity, spaces

## Example

```c
assert(is_palindrome("racecar") == 1);  // Should pass
assert(is_palindrome("hello") == 0);    // Should pass
```

## Running

```bash
gcc 1_tests.c -o tests
./tests
```

If all assertions pass, the program completes silently (or prints your success message). If any fail, the program aborts
with an error showing which assertion failed.
