# include <stdio.h>

int main(void){

    char name[64];
    int score;

    FILE* fp = NULL;

    fp = fopen("reading.txt","r");

    if (fp == NULL){
        perror("fopen");
        return 1;
    }

    int n = fscanf(fp,"%63s %d",name,&score);

    if ( n != 2){
        perror("fscanf");
        return 1;
    }

    printf("READ RESULTS:\n");
    printf("Name: %s\n",name);
    printf("Score: %d\n",score);

    fclose(fp);
    fp = NULL;

    return 0;

}