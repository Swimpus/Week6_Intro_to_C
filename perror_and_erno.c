# include <stdio.h>
# include <errno.h>

int main(void){

    FILE* fp = NULL;

    fp = fopen("missing.txt","r");

    if (fp == NULL){
        perror("fopen"); // Note how you can just put fopen as the error message and the compiler knows to print.
        // The error message related to fopen.
    }

    printf("errno = %d\n",errno); // Erno holds the numeric error code?
    return 1;

}