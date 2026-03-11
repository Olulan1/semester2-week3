# fgets() and sscanf()

1 Write a program using `scanf()` to read 2 integer values from user input in the form `3 + 4 =`

- we should use 2 integer variables to store the integer data
- we can provide a format string the matches the expected form of the input
    - eg. if we expected user input  


2 Write the same program using `fgets()` and `sscanf()`
- similar code can be used for `sscanf()` as `scanf()`

3 Generalise the code to read the operator as a character
- ie. read the `+` as a char variable
- you can now vary the operator as well as the values
    - ie. `3 - 2`, `4 * 6`
- you now have a model for starting a small calculator application
