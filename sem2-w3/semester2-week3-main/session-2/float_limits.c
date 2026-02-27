#include <float.h>
#include <stdio.h>

int main(void)
{
    printf("float:\n\n");

    printf("FLT_MIN = %e\n", FLT_MIN);
    printf("FLT_MAX = %e\n", FLT_MAX);
    printf("FLT_EPSILON = %e\n", FLT_EPSILON);

    printf("\ndouble\n\n");

    printf("DBL_MIN = %e\n", DBL_MIN);
    printf("DBL_MAX = %e\n", DBL_MAX);
    printf("DBL_EPSILON = %e\n", DBL_EPSILON);

    return 0;
}
