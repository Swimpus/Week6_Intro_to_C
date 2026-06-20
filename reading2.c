#include <stdio.h>

int main(void){

    char line[128];

    FILE* fp = NULL;

    fp = fopen("reading2.txt","r");

    if (fp == NULL){
        perror("fopen");
        return 1;
    }
    // Reading until the reading hits an EOF or error.
    while (fgets(line,sizeof(line),fp) != NULL){
        printf("Line:%s",line);
    }
    printf("\n");
    printf("DONE!");

    fclose(fp);
    fp = NULL;



}