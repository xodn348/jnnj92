/* Program 9.3 Passing a Pointer to a function */
#include <stdio.h>

/* Function prototypes */
int sum(int, int);
int product(int, int);
int difference(int, int);
int any_function(int(*pfun)(int, int), int x, int y);

int main(void)
{
    int a = 10;
    int b = 5;
    int result = 0;
    int (*pf)(int, int) = sum;

    /* Passing a pointer to a function */
    result = any_function(pf, a, b);

    printf("\nresult = %d", result);
    
    /* Passing a pointer to a function */
    result = any_function(product, a, b);

    printf("\nresult = %d", result);
    printf("\nresult = %d\n", any_function(difference, a, b));
    return 0;
}

/* Definition of a function to call a function */
int any_function(int(*pfun)(int, int), int x, int y)
{
    return pfun(x, y);
}

/* Definition of the function sum */
int sum(int x, int y)
{
    return x + y;
}

/* Definition of the function product */
int product(int x, int y)
{
    return x * y;
}

/* Definition of the function difference */
int difference(int x, int y)
{
    return x - y;
}
