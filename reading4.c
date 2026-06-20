# include <stdio.h>

int main(void){

    FILE* fp = NULL;

    fp = fopen("reading4.txt","r");

    int c; // Not an char c, because we have told hold ASCII values.

    while ((c=gets(fp) != EOF)){ // While we do not hit EOF.
        putchar(c); // put char in c,
    }
}