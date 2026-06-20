#include <stdio.h>

int main(void){

    char line[256];

    FILE *fpin = NULL;

    fpin = fopen("input.txt","r");

    if (fpin == NULL){
        perror("fopen");
        return 1;
    }

    while (fgets(line,sizeof(line),fpin) != NULL){
        printf("%s",line);
    }

    printf("Done Printing\n");

    fclose(fpin);
    fpin = NULL;
    return 0;



}