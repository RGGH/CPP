# Creating a file

## special data type for handling files is defined in stdio.h header file
## it's called a "file pointer"

    FILE *file_ptr;

## before file can be read or written, you must call fopen

    file_ptr = fopen("data.txt","w");

## fopen() returns file pointer if successful, else NULL if failure

    if (file_ptr != NULL)
        {
            printf("file created");
            fclose(file_ptr);
            return 0;
        }

## at the end you *must* close it, 

    fclose(file pointer);






