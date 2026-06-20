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

        // The usual fprintf (AKA printf but for files)
        fprintf(fpout,"Oh sorrow how much I both miss and belittle you\n");
        fprintf(fpout,"Yet when everyone will leave me...\n");
        fprintf(fpout,"I know you will be sitting next to me.\n");


        // fputs is for strings too! But it can miss the newline! YOU PUT IT!
        fputs("This is fputs! It's good for strings but needs you to put newlines~\n",fpout);
        fputs("Look at this string!\n",fpout);

        // fputc is for characters only. Use single quotes.
        // Not that you can put any character like newline!
        fputc('L',fpout);
        fputc('M',fpout);
        fputc('A',fpout);
        fputc('O',fpout);

        fputc('\n',fpout);


        // Proper closing etiquette.
        fclose(fpout);
        fpout = NULL;

        printf("Message sent succesfully!\n");
        return 0;
    }





}