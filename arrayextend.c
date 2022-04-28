#include <stdio.h>
#include <stdlib.h>

// repeatedly prompt user for input numbers.
// Add the numbers to an array of ints.
// Grow the array as necessarry.
// Stop reading numbers when a negative number is inputted

int main()
{
    int input;

    int capacity = 10;
    // initial array to hold ten ints
    int *arr = malloc(capacity * sizeof(int));
    int curr = 0; // current insert position in the array
    
    while(1)
    {
        printf("Enter and integer. Negative to end: ");
        scanf("%d", &input);
        if (input <0) break;
        // add to the array, extend if necessarry
        if (curr>=capacity)
        {
            capacity += 10;
            arr = realloc(arr, capacity * sizeof(int));
            // realloc returns the address of the same array
        }


        arr[curr]=input;
        curr++;
    };

    
    for (int i=0; i<curr;i++)
    {
        printf("%d",arr[i]);
    }
    
}
