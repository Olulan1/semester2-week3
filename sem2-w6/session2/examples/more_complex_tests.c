/**
 * More complex unit testing example using Acutest
 *
 * Demonstrates testing a file-reading function with multiple error conditions.
 * Compile: gcc more_complex_tests.c -o more_complex_tests && ./more_complex_tests
 *
 * Note: Requires existing_file.txt (with content) and empty.txt (empty) in same directory.
 */

#include "acutest.h"
#include <stdio.h>

// Error codes make code more readable
#define SUCCESS 0
#define ERROR_FILE_NOT_FOUND -1
#define ERROR_FILE_EMPTY -2

int read_file(const char* filename)
{
    FILE* file = fopen(filename, "r");

    if (!file)
    {
        return ERROR_FILE_NOT_FOUND;
    }

    fseek(file, 0, SEEK_END);
    if (ftell(file) == 0)
    {
        fclose(file);
        return ERROR_FILE_EMPTY;
    }

    fclose(file);
    return SUCCESS;
}

void test_read_existing_file(void)
{
    int result = read_file("existing_file.txt");
    TEST_CHECK(result == SUCCESS);
    TEST_MSG("Expected SUCCESS (%d) but got %d", SUCCESS, result);
}

void test_read_nonexistent_file(void)
{
    int result = read_file("nonexistent.txt");
    TEST_CHECK(result == ERROR_FILE_NOT_FOUND);
    TEST_MSG("Expected ERROR_FILE_NOT_FOUND (%d) but got %d", ERROR_FILE_NOT_FOUND, result);
}

void test_read_empty_file(void)
{
    int result = read_file("empty.txt");
    TEST_CHECK(result == ERROR_FILE_EMPTY);
    TEST_MSG("Expected ERROR_FILE_EMPTY (%d) but got %d", ERROR_FILE_EMPTY, result);
}

TEST_LIST = {
    { "read existing file", test_read_existing_file },
    { "read nonexistent file", test_read_nonexistent_file },
    { "read empty file", test_read_empty_file },
    { NULL, NULL }
};
