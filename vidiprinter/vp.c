#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    FILE *fps; // Source file
    FILE *fpd;  // Output file
    char *filename; 
    char *opfilename;
    int i;
    char buffer[2000];

    opfilename = "chars.c"; // double quotes!!
 

    if (argc < 2)
    {
        printf("Missing Filenames\n");
        return 1;
    }
    else
    {
        filename = argv[1];
        printf("Filename : %s\n", filename);
    }

    /* ------------ Open source code file in read-only mode ---------*/

    fps = fopen(filename,"r");
    fread(buffer, 1, 2000, fps);

    /*------------- Open destination file in write mode -----------------*/

    fpd = fopen(opfilename,"w+");

    if (fps != NULL)
    {
        printf("File chars.c created");
        for (i = 0; buffer[i]; i++)
        {
            usleep(600000);
            fputc(buffer[i], fpd); // put one char
            fflush(fpd); // flush one char
        }
    }
    fclose(fps);
    fclose(fpd);
    return 0;
}
