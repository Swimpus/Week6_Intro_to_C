# include <stdio.h>


int main(void){

    FILE* fpout = NULL;

    fpout = fopen("output.txt","w");

    if (fpout == NULL){
        perror("fopen");
        return 1;
    }

    for (int i =0 ; i <= 10; i++){
        fprintf(fpout,"%d\n",i);
    }

    fclose(fpout);
    fpout = NULL;

}