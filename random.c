#include<time.h>
#include<stdlib.h>
#include<stdio.h>


int main()
{
    srand(time(0));

    int x = rand()%100;

    printf("%d",x);
}
