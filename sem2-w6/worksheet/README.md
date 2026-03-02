# Week 6 Worksheet - Functions Practice

This worksheet tests your understanding of functions in C, including:

- **Pass by value**: Returning results from functions
- **Pass by reference**: Modifying variables via pointers
- **Arrays as arguments**: How arrays are passed to functions
- **Output parameters**: Returning multiple values

## Getting Started

1. Open `worksheet.c` in your editor
2. Read the documentation for each function
3. Implement the functions marked with `// TODO`
4. Test your implementations using the built-in unit tests

## Building and Running

```bash
# Compile and run all tests
gcc worksheet.c -o worksheet && ./worksheet
```

The worksheet uses [Acutest](https://github.com/mity/acutest), a lightweight unit testing framework. Tests run
automatically when you execute the program.

## Test Commands

```bash
./worksheet              # Run all tests
./worksheet --list       # List available tests
./worksheet add_values   # Run a specific test
./worksheet --verbose    # Show more detail
```

## Functions to Implement

| # | Function                    | Concept                                |
|---|-----------------------------|----------------------------------------|
| 1 | `add_values(int, int)`      | Pass by value, simple return           |
| 2 | `swap_values(int*, int*)`   | Pass by reference (pointers)           |
| 3 | `sum_array(int*, int)`      | Array as pointer argument              |
| 4 | `reverse_array(int*, int)`  | In-place array modification            |
| 5 | `average(int*, int)`        | Return type conversion (int to double) |
| 6 | `find_max(int*, int, int*)` | Output parameter pattern               |

## Understanding Test Output

When a test **passes**:

```
Test add_values...    [ OK ]
```

When a test **fails**:

```
Test add_values...    [ FAILED ]
  worksheet.c:161: add_values(3, 4) == 7... failed
    Expected add_values(3, 4) = 7
```

The failure message tells you:

- Which line in `worksheet.c` failed
- What condition was expected
- What the expected value should be

## Hints

### Function 1: add_values

This is the simplest case - just add the two parameters and return.

### Function 2: swap_values

You need a temporary variable:

```c
int temp = *a;
*a = *b;
*b = temp;
```

### Function 3: sum_array

Use a loop to add up all elements. Remember arrays start at index 0.

### Function 4: reverse_array

Swap elements from both ends, working toward the middle. Only iterate to `n/2`.

### Function 5: average

Be careful with integer division! Try `(double)sum / n` to get the correct result.

### Function 6: find_max

Track both the maximum value AND its index as you iterate through the array.

## Submission

Submit `worksheet.c` to Gradescope. The autograder will compile and test your functions automatically.
