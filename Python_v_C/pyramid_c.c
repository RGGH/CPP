#include<stdio.h>

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
