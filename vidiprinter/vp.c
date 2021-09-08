/*
+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
|r|e|d|a|n|d|g|r|e|e|n|.|c|o|.|u|k|
+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* prints source file (text) to new file, as if it is being typed by a human
open up the dstfile and see it being typed during the execution of the program!
*/


int main(int argc, char *argv[])
{

    int c, n; // use for random delay

    FILE *fps; // Source file
    FILE *fpd; // Output file
    char *filename;
    char *opfilename;
    int i;
    char buffer[2000];

    if (argc < 3)
    {
        printf("Missing Filenames - use '$ ./writechars_2 SRC_file DST_file'\n");
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
        
            n = rand() % 100 + 1;       // random multiplier 

            usleep(100000 + n*5000);    // create random delay between keystrokes
            fputc(buffer[i], fpd);      // put one char
            fflush(fpd);                // flush one char
        }
    }
    fclose(fps);
    fclose(fpd);
    return 0;
}
