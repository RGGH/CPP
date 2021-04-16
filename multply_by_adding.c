// recursion

#include<stdio.h>

int mpl (int x, int y)
{
    int tot=0;
    while (y>0)
    {
        int z = x;
        tot = tot + z;
        y -=1;
    }

    return tot;
}


int main()
{
    int a,b, n;
    a=5;
    b=4;

    n = mpl(a,b);
    printf("%d",n);
    return 0;
}
