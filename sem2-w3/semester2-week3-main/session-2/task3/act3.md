
# Code examples

1. **Quadratic roots**

The `quadratic.c` code is a template for this part.

The formula for the roots requires a square root operator. 
- In C this is provided as part of the math library `math.h`
- You must include this library as part of your code
- Add `#include <math.h>` after the line including `stdio.h`
- The function is `sqrt(x)` which computes the positive square root of value x.

Try compiling your program as usual. 
- You will get a linking error due to the math function you are now using
- You must compile using an additional flag `-lm` to indicate to the compiler you are linking to the math library
- `gcc quadratic.c -o quadratic -lm` 

Complete the code then compile and run it.

You are given data (a,b,c) = (1,-5,6) which should produce roots 2,3.
Test your implementation for further cases
- (a,b,c) = (1,0,-1) which should produce roots 1,-1
- (a,b,c) = (2,5,-3) which should produce roots 0.5,-3

2. **Compound interest**

The `compound_interest.c` code is a template for calculating compound interest on an initial deposit.

We set the interest rate and the term (number of year) with interest applied yearly.

We can use the formula:   final = deposit x ( 1 + rate )^term

The formula for compound interest requires a power operator. 
- You need to `#include <math.h>`
- The function is `pow(x,n)` that calculates x^n
- You must compile using the additional flag `-lm` 
- `gcc compound_interest.c -o compound_interest -lm` 

3. **Extension tasks**

(i) You can extend the program further to include the option to apply interest several times a year with a further integer variable and include this in the formula for the final amount. 

(ii) You may have noticed in this problem that we mix float and integer values

This is what we termed implicit casting

When we combine int and float types this is generally OK
- as long as the final result is a float
- integers can be accurately converted to an equivalent float
- and as long as we don't perform potentially inaccurate operations, eg. integer division

If the final result is an int then accuracy can be lost
- converting float to int requires rounding or truncation
- you can write a small program to test which happens in practice

We should only mix primitive types when we fully understand
- that the expressions will not be inaccurately calculated
- that the final result is of an appropriate type

(iii) Why is the math library not included as part of your C executable by default?
- what implication does this have for the executable program?
- how does this fit with the design principles of the C language?
