
## Compiler error messages

One of the key coding skills required is recognising and fixing errors.

There are 4 simple examples in this folder to illustrate common compiler errors and warnings.

**In each case compile the code using gcc**

Observe:
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

Which of these cases compile? Why?

**The 4th case**

What is wrong with this case?

**Gradescope autograding of C code**

When we submit C code to Gradescope the autograder first has to compile the submitted code before testing.

Test your code "hello1.c" with the "Classwork 2.3 - practice test" submission autograder
- Submit correct code
- Introduce errors and resubmit
- Submit a different file

In each case look at the Gradescope Autograder output
- This will be typical for tasks submitted this semester
