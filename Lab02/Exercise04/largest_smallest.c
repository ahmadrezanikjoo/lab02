#include <stdio.h>

int main( void ) {
    int largest; /* largest integer */
    int smallest; /* smallest integer */
    int int1; /* define int1 for user input */
    int int2; /* define int2 for user input */
    int int3; /* define int3 for user input */
    int temp; /* temporary integer for swapping */

    printf( "Input 5 integers: " ); /* prompt user and read 5 ints */
    scanf( "%d%d%d%d%d", &largest, &smallest, &int1, &int2, &int3 );

    if ( smallest > largest ) { /* make comparisons */
        temp = largest;
        largest = smallest;
        smallest = temp;
    } 

    if ( int1 > largest ) {
        largest = int1;
    } 

    if ( int1 < smallest ) {
        smallest = int1;
    } 

    if ( int2 > largest ) {
        largest = int2;
    } 

    if ( int2 < smallest ) {
        smallest = int2;
    } 

    if ( int3 > largest ) {
        largest = int3;
    } 

    if ( int3 < smallest ) {
        smallest = int3;
    } 

    printf( "The largest value is %d\n", largest );
    printf( "The smallest value is %d\n", smallest );
    return 0; /* indicate successful termination */
} 
