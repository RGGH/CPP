#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

int main(void) 
{ 
   srand(time(0)); /*srand() function really generates pseudo-random integers.*/

   for(int i = 0; i<10; i++) 
      printf(" %d ", (rand()%100)+20); 
   
   printf("\n");
   return 0; 
}
