/*
+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
|r|e|d|a|n|d|g|r|e|e|n|.|c|o|.|u|k|
+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
*/

#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
#endif

//There is no built-in "sleep" in C99, hence this function. You can use any method you want to implement a delay.
void customSleep( int seconds )
{   // Pretty cross-platform, both ALL POSIX compliant systems AND Windows
    #ifdef _WIN32
        Sleep( 1000 * seconds );
    #else
        sleep( seconds );
    #endif
}

#include <stdio.h>
#include <time.h>

/* prints source file (text) to new file, as if it is being typed by a human
open up the dstfile and see it being typed during the execution of the program!
*/


int main(int argc, char *argv[])
{
    FILE *fps; // Source file
    FILE *fpd; // Output file
    char *filename;
    char *opfilename;
    int i;
    char buffer[2000];

    if (argc < 3)
    {
        printf("Missing Filenames - use '$ ./writechars_2 srcfile dstfile'\n");
        return 1;
    }
    else
    {
        filename = argv[1];
        opfilename = argv[2];
    }

    /* ------------ Open source code file in read-only mode ---------*/

    fps = fopen(filename, "r");
    fread(buffer, 1, 200, fps);

    /*------------- Open destination file in write mode -----------------*/

    fpd = fopen(opfilename, "w+");

    if (fps != NULL)
    {
        printf("%s output file created\n", opfilename);
        for (i = 0; buffer[i]; i++)
        {
            customSleep(1);
            fputc(buffer[i], fpd); // put one char
            fflush(fpd);           // flush one char
        }
    }
    fclose(fps);
    fclose(fpd);
    return 0;
}
