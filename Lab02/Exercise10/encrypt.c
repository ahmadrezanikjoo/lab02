#include <stdio.h>

int main ( void )
{
    int number; /* number inputed by user */ 
    int num1; /* first (leftmost) digit */
    int num2; /* second digit */
    int num3; /* third digit */
    int num4; /* fourth (rightmost) digit */

    printf( "Please input a 4-digit number you wish to encrypt:" );
    scanf( "%d", &number );

    /* separate out the digits */
    num4 = number % 10;
    number = number / 10;
    num3 = number % 10;
    number = number / 10;
    num2 = number % 10;
    number = number / 10;
    num1 = number % 10;

    /* Add 7 to each digit and get the remainder
    after dividing the new value by 10 */
    num1 = ( num1 + 7 ) % 10;
    num2 = ( num2 + 7 ) % 10;
    num3 = ( num3 + 7 ) % 10;
    num4 = ( num4 + 7 ) % 10;

    /* Switch the first and third digits */
    /* Switch the second and fourth digits */
    number = num3 * 1000 + num4 * 100 + num1 * 10 + num2;
    printf( "The encrypted number is %d\n", number );

    return 0;
}
