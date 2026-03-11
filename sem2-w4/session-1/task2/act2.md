# Activity 2 - multi-dimensional arrays

1. **Matrix add**

Initialise the values of 2 matrices a and b to 1.
- This will require a nested loop
- The outer loop should use the first (left) index
- The inner loop should use the second (right) index

Compute the sum of the matrices with a nested loop.

Print out the matrix
- For a small case you can print one row at a time.
- For a larger matrix you can do this with a nested loop, with a line break after each inner loop

2. **Matrix-vector product**

Initialise a matrix a and a vector b using for loops

Compute the matrix-vector product, storing your answer in vector c

  `c[k] = sum_j (a_[k][j]x[b][j])`


3. **Matrix transpose - challenge task**

Transpose a matrix in place - ie. without using a further copy of the matrix

The transpose T of a matrix A is defined as `T[i][j] = A[j][i]`  

Initialise a matrix A[4][4] using the following formula: `A[i][j] = 2i-j`

Print the initial matrix.

Using nested for loops transpose the matrix A in-place.

Print the final matrix to verify the transpose is correct.
