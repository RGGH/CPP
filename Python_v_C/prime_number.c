#include<stdio.h>

int calprime(int n);

int main()
{
    int i;
    int result;

    for (i=0; i<=99; i++)
    {
        result = calprime(i);

        if (result == 1)
            printf("%d is prime\n",i);
        else
            printf("%d is not prime\n",i);   
    }
        return 0;
}

int calprime(int n){

    int mj;

        for (mj=2;mj<=(n-1);mj++)
        {
            if (n % mj == 0)
                return 0; // if it's not a prime
        }
        if (mj == n)
            return 1;
            
}
