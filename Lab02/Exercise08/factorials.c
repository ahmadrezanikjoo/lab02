#include <stdio.h>

int main( void ) {
    int n; /* current multiplication factor */
    int number = -1; /* input number */
    int factorial = 1; /* resulting factorial */

    /* loop until valid input */
    while ( number < 0 ) {
        printf( "Enter a positive integer: " );
        scanf( "%d", &number );
    }
    n = number;

    /* compute factorial */
    while ( n >= 0 ) {
        if ( n == 0 ) {
            factorial *= 1;
        }
        else {
            factorial *= n;
        }
        --n;
    }

    printf( "%d! is %d\n", number, factorial );
    return 0;
}
