# Pointers

1. **Pointer type**

The program `ptr_size.c` uses the `sizeof` operator to query the pointer data type.

Compile and run the program.  

Does the output match what you expect based on the machine architecture?
- You can query this on linux using `uname -m`. 
- `uname` is a utility that displays system information. Use `uname --help` for fuller details.

Extend the program to output data about a double pointer:
- Do you expect the size to change?
- Why?

2. **Pointer operators**

The program `ptr_ops.c` demonstrates the pointer operators.
- Note that we print an address using the pointer format `%p`.
- Note that we print a float value using the float format `%f`.

Compile and run the code and examine the output. 
- We use the address operator `&` to get the address of a variable 
- We use the dereferencing operator `*` to get the value stored at the address stored in the pointer.

What format is the memory address displayed as?

3. Research and discuss why a pointer is statically typed.

- ie. a pointer to an integer has to be declared as `int *p`
- Hint: it is not connected to what it stores - all pointers store an address
