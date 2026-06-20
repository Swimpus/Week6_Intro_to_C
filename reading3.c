# include <stdio.h>

int main(void){

    char line[256];
    char name[64];

    int score;

    FILE *fp = NULL;

    fp = fopen("reading3.txt", "r");

    if (fp == NULL){
        perror("fopen");
        return 1;
    }
    // Reads with fgets and includes newline!
    while (fgets(line,sizeof(line),fp) != NULL){
        if (sscanf(line,"%63s %d",name,&score) == 2){ // Parsing the lines read piece by piece and printing!
            printf("%s -> %d\n",name,score);
        }
    }

    printf("DONE!");

    fclose(fp);
    fp = NULL;
    return 0;
}