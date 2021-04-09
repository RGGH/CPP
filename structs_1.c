#include<stdio.h>

struct mofo{

    int x;
    int y;
    char z;
} ;

struct mofo jml;

int main()
{
    jml.x = 5;
    jml.y = 6;
    jml.z = 'w';
    printf("%d\n",jml.x);
    printf("%d\n",jml.y);
    printf("%c\n",jml.z);
}
