#include<stdio.h>

void twice( int *ptr);
void thrice( int *ptr);

int main(){
    int num = 5;
    int *ptr = &num;

    printf("pointer ptr stores address %p\n",ptr);
    printf("pointer ptr dereferences value %d\n",*ptr);
    printf("num value %d\n",num);

    twice ( ptr );
    printf( "The num value is now %d\n", num );
    thrice ( ptr );
    printf( "The num value is now %d\n", num );
    return 0;
}

void twice( int *number )
{
    *number = (*number * 2);
}

void thrice( int *number )
{
    *number = (*number * 3);
}
