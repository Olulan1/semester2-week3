#include <stdio.h>

void add(int a, int b, int answer)
{
    answer = a + b;
}

int main(void)
{
    int num1 = 10, num2 = 5, result = 0;
    add(num1, num2, result);
    printf("%d\n", result);
    return 0;
}