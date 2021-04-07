// passing a pointer to a function //

#include <stdio.h>
#include <time.h>
 
void get_seconds(int *ptr);

int main () {

   int sec;
   get_seconds( &sec );

   /* print the actual value */
   printf("Number of seconds: %d\n", sec );

   return 0;
}

void get_seconds(int *ptr) {
   /* get the current number of seconds */
   *ptr = time( NULL );
   return;
}
