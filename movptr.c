#include<stdio.h>

int main()
{
    int i;
    int nums[10] = {1,2,3,4,5,6,7,8,9,10};

    int *ptr = nums;
    printf("\nAt address %p is value %d",ptr,*ptr);

    ptr++;
    printf("\nAt address %p is value %d",ptr,*ptr);
    
    ptr++;
    printf("\nAt address %p is value %d",ptr,*ptr);

    ptr -=2;
    printf("\nAt address %p is value %d",ptr,*ptr);

    for (i=0;i<10; i++)
    {
      printf("\nAt address %p is value %d",ptr,i);  
        ptr++;
    }


}
