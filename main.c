#include <stdio.h>
#include "searching.h"

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    printf("Study Git\n");
    printf("1 * 2 = %d\n", multiply(1, 2));

    int list[] = {1, 2, 3, 4, 5};
    printf("Index of 3: %d\n", sequential_search(list, 5, 3));

    return 0;
}