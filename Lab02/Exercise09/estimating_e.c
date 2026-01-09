#include <stdio.h>

int main( void ) {
    int n = 0; /* loop counter for accuracy */
    int fact = 1; /* current n factorial */
    int accuracy = 10; /* degree of accuracy */
    float e = 0; /* current estimated value of e */

    /* loop until degree of accuracy */
    while ( n <= accuracy ) {
        if ( n == 0 ) {
            fact *= 1;
        }
        else {
            fact *= n;
        }
        e += 1.0 / fact;
        ++n;
    }

    printf( "e is %f\n", e ); /* display estimated value */
    return 0;
}
