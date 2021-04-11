#include<stdio.h>

#define CUATRO 4
#define TRES 3

int main()
{
    char* ka[3] = {"moo", "koo", "vooo"};

    printf("%s", ka[2]);

    int i = -1;
    int ans;

    while (i !=0)
    {
        printf("%s", "enter a number : \n");
        scanf("%d",&ans);
        if (ans == 3)
        {
            printf("%s","Correct");
            return 0;
        }
    }

}
