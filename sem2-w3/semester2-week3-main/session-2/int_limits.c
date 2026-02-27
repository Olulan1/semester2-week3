#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("Signed types\n\n");

    printf("short : %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("int   : %d to %d\n", INT_MIN, INT_MAX);
    printf("long  : %ld to %ld\n", LONG_MIN, LONG_MAX);

    // printf("\nUnsigned types\n\n");

    // printf("unsigned short : 0 to %d\n", USHRT_MAX);
    // printf("unsigned int   : 0 to %u\n", UINT_MAX);
    // printf("unsigned long  : 0 to %lu\n", ULONG_MAX);

    return 0;
}
