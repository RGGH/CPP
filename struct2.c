#include<stdio.h>
#include<string.h>

struct employees{
    int age;
    int sal;
    char *dept;
};


int main()
{
    struct employees temps;
    temps.age = 33;
    temps.sal = 55;
    temps.dept = "sales";
    printf("%s\n",temps.dept);
    printf("%d\n",temps.sal);

    struct employees perms;
    perms.age = 24;
    perms.sal = 66;
    printf("%d\n",perms.sal);
}