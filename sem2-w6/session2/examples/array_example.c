/**
 * Array as function argument example
 *
 * Demonstrates that arrays are passed by reference (via pointer).
 * When we modify array elements inside a function, the changes
 * persist in the calling function.
 *
 * Expected output: 3
 */

#include <stdio.h>

void update(int *v)
{
    v[2] = 3;  // Modify array element
}

int main(void)
{
    int vector[4] = { 4, 2, -1, 8 };

    // vector[2] is currently -1
    update(vector);  // Pass array (which decays to pointer)

    // vector[2] is now 3 because arrays use call-by-reference behaviour
    printf("%d\n", vector[2]);

    return 0;
}
