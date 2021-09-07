/*
+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
|r|e|d|a|n|d|g|r|e|e|n|.|c|o|.|u|k|
+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
*/
// Calculate the factorial in C

#include <stdio.h>

int main()
{

    int num;
    int fact;
    int i;
    printf("Enter a number\n");
    scanf("%d", &num);
    fact = 1;
    for (i = 1; i < num; i++)
    {
        fact *= i;
    }
    printf("%d", fact);
}
