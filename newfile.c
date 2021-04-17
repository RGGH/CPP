#include<stdio.h> // contains file input / output standard functions

int main()
{
    FILE *file_ptr; // declare a file pointer
    file_ptr = fopen("data.txt","w");

    if ( file_ptr != NULL )
    {
        printf("File created\n");
        fclose(file_ptr );
        return 0; 
    }
    else
    {
        printf("Unable to create file\n");
        return 1;
    }
}

// note: DOUBLE quotes !

// fputs() and fgets() read one char at a time
// fread() and fwrite() write entire filestream
