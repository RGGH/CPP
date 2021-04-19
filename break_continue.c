#include<stdio.h>

int main()
{
    int a;

    a=5;


    while(a<13)
    {
        a+=1;
        if(a==9){
        break;
        //continue;    
        }
        printf("%d ",a);
    }
    return 0;
}
