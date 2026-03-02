# Task 2: Combinatorials (Recursion)

## Overview

Use the provided `factorial()` function to implement combination (nCr) and permutation (nPr) calculations.

## Instructions

The program should accept command line arguments:

```bash
./combinatorials 7 C 2    # Calculate 7C2 (combinations)
./combinatorials 5 P 3    # Calculate 5P3 (permutations)
```

## Formulas

- **nCr** (combinations): `n! / (r! × (n-r)!)`
- **nPr** (permutations): `n! / (n-r)!`

## Requirements

1. Add appropriate validation (n and r must be positive, r ≤ n)
2. Use functions to organise your code
3. Handle both 'C' and 'P' operations

## Example Output

```
$ ./combinatorials 7 C 2
7C2 = 21

$ ./combinatorials 5 P 3
5P3 = 60
```
