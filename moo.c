#include<stdio.h>

void count_down_from(int num);

int main(){

    int start;

    printf("Enter a pos int to countdown from\n");
    scanf("%d",&start);
    count_down_from(start);
    printf("lift off\n");
    return 0;
}

void count_down_from(int num)
{
    printf("%d\n",num);

    --num;
    if (num < 0) return;
    else count_down_from(num);
}
