# include <stdio.h>

int main(int argc, char *argv[]){

    // To check if we are getting the right amount of arguments...
    // Let's say we are expecting 2! Program Name + 1 argument

    if (argc != 2){
        fprintf(stderr,"Not enough arguments were passed\n");
        return 1;
    }else{
        printf("Correct amount of arguments passed!\n");

        for (int i=0; i<argc; i++){
            printf("Passed arguments: ");
            printf("argv[%d] -? \"%s\"\n",i,argv[i]);
        }
    }



    return 0;
}