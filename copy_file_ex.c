# include <stdio.h>

int main(void){

    FILE *src, *dst = NULL;
    int c;

    src = fopen("in.txt","r");
    dst = fopen("out.txt","w");

    if (src == NULL || dst == NULL){
        perror("fopen");
        return 1;
    }

    while ((c = fgetc(src)) != EOF){
        fputc(c,dst);
    }

    fclose(src);
    fclose(dst);

    src = dst = NULL;
    return 0;

}