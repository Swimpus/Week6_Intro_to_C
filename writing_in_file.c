# include <stdio.h>

int main(void){


    // Turn on channel and declare a pointer to null.
    FILE* fp = NULL;

    // Open file to hello.txt and in writing mode.
    fp = fopen("hello.txt","w");

    // Checking if the file worked.
    if (fp == NULL){
        perror("Error opening file");
        return 1; // Return 1 is failure.
    }

    // File print (file, message)
    fprintf(fp,"Hello! Ya te llego el amor o que?\n");


    // Close file and declare to NULL.
    fclose(fp);
    fp = NULL;

    printf("FILE WRITING WORKED\n");

    return 0; // Success.

}