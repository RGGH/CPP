/*
+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
|r|e|d|a|n|d|g|r|e|e|n|.|c|o|.|u|k|
+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
*/

#include<stdio.h>

/* make a pyramid
    1 
   2 3 
  4 5 6 
 7 8 9 10 
*/

#define SIZE 4


void makerow(int endrowval, int row);

int main()
{
    int endrowval; // last value for the row
    int prev=1;
    int row = 1;
    for (row=1;row<=SIZE;row++){  
        endrowval = prev+=row;    
        makerow(endrowval,row);
    }
    }

void makerow(int endrowval, int row){
    int i=0;
    printf("%*c",((SIZE+1)-row),' ');
    for (i;i<row;i++){
        printf("%d ",endrowval-(row-i));
    }
    printf("\n");
}
