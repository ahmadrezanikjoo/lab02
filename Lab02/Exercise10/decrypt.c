#include <stdio.h>

int main ( void )
{
    int number; /* number inputed by user */ 
    int num1; /* first (leftmost) digit */
    int num2; /* second digit */
    int num3; /* third digit */
    int num4; /* fourth (rightmost) digit */

    printf( "Please input a 4-digit number you wish to unencrypt:" );
    scanf( "%d", &number );

    /* separate out the digits */
    num4 = number % 10;
    number = number / 10;
    num3 = number % 10;
    number = number / 10;
    num2 = number % 10;
    number = number / 10;
    num1 = number % 10;

    /* Figure out the original digit. 
    Note this is equivalent to adding 3 to the encrypted digit */
    num1 = ( ( num1 + 10 ) - 7 ) % 10;
    num2 = ( ( num2 + 10 ) - 7 ) % 10;
    num3 = ( ( num3 + 10 ) - 7 ) % 10;
    num4 = ( ( num4 + 10 ) - 7 ) % 10;

    /* Switch the first and third digits */
    /* Switch the second and fourth digits */
    number = num3 * 1000 + num4 * 100 + num1 * 10 + num2;
    printf( "The encrypted number is %d\n", number );

    return 0;
}
