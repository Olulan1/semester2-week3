# (1) Executing and Parsing (session 1)
Given source code file: hello.c

1. **Compile the source code using gcc**

  `gcc hello.c`

The result is an executable file: a.out
- This "executable file" is stored on your local disk
- We can compile our code once and run the executable many times
    - Compare this to the Python programming model we have used
- We could remove the source code file (hello.c) and the executable program still exists and can be run.

Run the executable file

  `./a.out`

2. **The return value**

Executing the code on the command line allows us to view the return code using

  `echo $?`

This shell (terminal) command shows us the last return code that was received.

If you want convincing of this, change the return value in the C source code to another value, compile and test again. 

3. **Compile to a named executable**

  `gcc hello.c -o hello`

The result is an executable file: hello
- C does not put any restrictions on the name of executable files - we use the "-o" flag to name it
- The usually convention on linux is that the name of the source code file determines the executable name
    - Source code "hello.c" -> Executable program "hello"
- You should avoid using the default "a.out" - always give the executable a sensible name

Run the executable file

  `./hello`

4. **Compile to object code and then link to an executable in 2 stages**

  `gcc -c hello.c`

The intermediate result is an object code file: hello.o

  `gcc hello.o -o hello`

The final result is an executable file we can run: hello

  `./hello`

5. **What is object code?**

We can look inside the object code using the linux utility objdump.
We can use it as a "disassembler" to display object file

  `objdump -d hello.o`

Do you recognise this from COMP1860?

The object code is an intermediate form that cannot itself be executed.
It requires linking to the standard C libraries and any other included libraries.

6. **What is executable code?**

We can similarly look in the executable file to see the final linked form.

  `objdump -d hello`

This final executable form contains all the information necessary to execute on the machine.

# (2) Errors (session 1)

bserve:
- the error or warning message
- the related error in the source code file

These types of mistakes are very common but become harder to find as the code size increases.

**Errors and Warnings**

There is a distinction between compiler
- Errors 
    - object code will not be produced 
    - you cannot complete compilation without fixing these
- Warnings 
    - compilation will generally proceed 
    - in most cases you will still produce an executable

Warnings are generally are symptom of some issue with your code and should be detected and fixed,
even if the code would run anyway.

# (3) Variables and memory (w3, session 2)

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

- you can [look up ASCII codes](https://www.ascii-code.com/) to verify the output.

# (4) Pointers (w3, session 2)

1. **Pointer type**

The program `ptr_size.c` uses the `sizeof` operator to query the pointer data type.
size(double pointer) = size(int pointer)

2. **Pointer operators**

The program `ptr_ops.c` demonstrates the pointer operators.
- Note that we print an address using the pointer format `%p`.
- Note that we print a float value using the float format `%f`.

Compile and run the code and examine the output. 
- We use the address operator `&` to get the address of a variable 
- We use the dereferencing operator `*` to get the value stored at the address stored in the pointer.

What format is the memory address displayed as?
Hexcode

