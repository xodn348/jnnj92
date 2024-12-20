/* Program 3.10 Exercising bitwise operators */
#include <stdio.h>
int main(void)
{
    unsigned int original = 0xABC;
    unsigned int result = 0;
    unsigned int mask = 0xF;

    printf("\n original = %X", original);

    /* Insert first digit in result*/
    result |= original&mask;

    /* Get second digit */
    original >>= 4;
    result <<= 4;
    result |= original&mask;

    /* Get third digit */
    original >>= 4;
    result <<= 4;
    result |= original&mask;
    printf("\t result =%X\n", result);
    return 0;
}