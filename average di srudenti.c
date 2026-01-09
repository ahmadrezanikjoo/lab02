/*il average dei voti di studenti*/
#include<stdio.h>
#define numstudenti 10

int main( void ) {

    int grade;
    int counter;
    int total;
    float average;

    counter = 0;
    total = 0;

    while( counter < numstudenti ) {

        printf( "metti il grade" );
        scanf( "%d", &grade );
        total = total + grade;
        counter = counter + 1;
    }

    average = (float)total / numstudenti;
    printf( "average is %f\n", average);
    return 0;
}

    