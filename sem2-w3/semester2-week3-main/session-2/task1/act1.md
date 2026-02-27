# Variables and memory

1. **Int and float types**

The program `sizes.c` uses the `sizeof` operator to query primitive data types.

Compile and run the program
- Recall that we compile to a named executable using `gcc sizes.c -o sizes`
- We execute (run) the code using `./sizes`  

Note that we print the output as `%ld` the format for a `long int`.

Extend the program to output data about further primtive types:
- `short int`
- `long int`
- `double`

2. **Character type**

The program `chars.c` demonstrates the link between `char` and `int` types.

We can use the format statement to explore the representation.

- Printing the variable in character format `%c` shows the character.
- Printing the variable in integer format `%d` show the ASCII character code.
- We can also print an integer as a character using `%c` provided it is from the ASCII range (0-127).

Compile the code and examine the output. 

Adjust the variable values to test the code.
- you can [look up ASCII codes](https://www.ascii-code.com/) to verify the output.

3. **Research question**

Why does `sizeof()` return a `long int` value rather than an `int`?
