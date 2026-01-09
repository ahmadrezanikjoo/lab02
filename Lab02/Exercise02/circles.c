#include <stdio.h>
#include <math.h>

int main( void ) {
  float radius; /* circle radius */

  printf( "Input the circle radius: " ); /* prompt user */
  scanf( "%f", &radius ); /* read integer radius */

  /* calculate and output diameter, circumference and area */
  printf( "\nThe diameter is %f\n", 2 * radius );
  printf( "The circumference is %f\n", 2 * M_PI * radius );
  printf( "The area is %f\n", M_PI * radius * radius );
  return 0; /* indicates successful termination */
}
