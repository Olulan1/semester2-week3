/**
 * Simple unit testing example using Acutest
 *
 * Demonstrates basic TEST_CHECK usage for testing a simple add function.
 * Compile: gcc simple_tests.c -o simple_tests && ./simple_tests
 */

#include "acutest.h"

int add(int a, int b)
{
    return a + b;
}

void test_add_positive_numbers(void)
{
    TEST_CHECK(add(2, 3) == 5);
    TEST_MSG("Expected 2 + 3 = 5");
}

void test_add_with_negative(void)
{
    TEST_CHECK(add(-1, 1) == 0);
    TEST_MSG("Expected -1 + 1 = 0");
}

void test_add_zeros(void)
{
    TEST_CHECK(add(0, 0) == 0);
    TEST_MSG("Expected 0 + 0 = 0");
}

TEST_LIST = {
    { "add positive numbers", test_add_positive_numbers },
    { "add with negative", test_add_with_negative },
    { "add zeros", test_add_zeros },
    { NULL, NULL }
};
