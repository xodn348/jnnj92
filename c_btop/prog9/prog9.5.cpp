/* Program 9.5 Global variables */
#include <stdio.h>

int count = 0; 

/* Function prototypes */
void test1(void);
void test2(void);

int main(void)
{

    for( ; count < 5; count++)
    {
        test1();
        test2();
    }
    return 0;
}

/* Function test1 with automatic variable - global count */
void test1(void)
{
    printf("\ntest1     count = %d", ++count);
}

/* Function test1 with automatic variable - local static count*/
void test2(void)
{
    static int count;
    printf("\ntest2     count = %d", ++count);
}