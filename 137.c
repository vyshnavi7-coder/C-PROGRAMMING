 //c program to replicate ren command of windows command line interface
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

 main(int argc, char *argv[])
 {
    if (argc != 3)
    {
        printf("Usage: %s <oldname> <newname>\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    char *oldname = argv[1];
    char *newname = argv[2];

    if (rename(oldname, newname) == 0)
    {
        printf("Renamed %s to %s successfully.\n", oldname, newname);
    }
    else
    {
        perror("Error renaming file");
        exit(EXIT_FAILURE);
    }
}


