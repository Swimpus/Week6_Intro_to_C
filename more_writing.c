# include <stdio.h>

int main(void){

    // Turn on TV controller.

    FILE* fpout = NULL;

    fpout = fopen("poem.txt","w");

    // If still equal to null...
    if (fpout == NULL){
        perror("fopen"); // Print error message
        return 1; // And return failure
    }else{
        fprintf(fpout,"Oh sorrow how much I both miss and belittle you\n");
        fprintf(fpout,"Yet when everyone will leave me...\n");
        fprintf(fpout,"I know you will be sitting next to me.\n");

        // Proper closing etiquette.
        fclose(fpout);
        fpout = NULL;

        printf("Message sent!\n");
        return 0;
    }





}