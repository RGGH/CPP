/*
+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
|r|e|d|a|n|d|g|r|e|e|n|.|c|o|.|u|k|
+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
*/

#include <stdio.h>
#include <unistd.h>

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
    fread(buffer, 1, 2000, fps);

    /*------------- Open destination file in write mode -----------------*/

    fpd = fopen(opfilename, "w+");

    if (fps != NULL)
    {
        printf("%s output file created\n", opfilename);
        for (i = 0; buffer[i]; i++)
        {
            usleep(600000);
            fputc(buffer[i], fpd); // put one char
            fflush(fpd);           // flush one char
        }
    }
    fclose(fps);
    fclose(fpd);
    return 0;
}
