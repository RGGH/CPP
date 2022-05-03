#include <stdio.h>
#include <stdlib.h>

struct landmark
{
    float lon;
    float lat;
    char place[20];
};

// function to print a struct
void print_lm(struct landmark lm)
{
    printf("lon = %f, lat=%f, place= %s", lm.lon, lm.lat, lm.place);
}

int main()
{

    struct landmark lm[5];

    for (int i = 0; i < 5; i++)
    {
        // get user input
        printf("Enter lon\n");
        scanf("%f", &lm[i].lon);
        printf("Enter lat\n");
        scanf("%f", &lm[i].lon);
        printf("Enter place\n");
        scanf("%s", lm[i].place);
    }

    for (int i = 0; i < 5; i++)
    {
        // print array of structs
        print_lm(lm[i]);
    }
}
