#include "include/acutest.h"

void test_example(void);

void test_example(void)
{
    void* mem;
    int a, b;

    mem = malloc(10);
    TEST_CHECK(mem != NULL);

    mem = realloc(mem, 20);
    TEST_CHECK(mem != NULL);

    a = 1;
    b = 2;
    TEST_CHECK_(a + b == 3, "Expected %d, got %d", 3, a + b);
}

TEST_LIST = {
   { "example", test_example },
   { 0 }
};
