
# include <stdio.h>

// The usual set up.
// agrc -> Argument count, always >= 1.
// argv -> Argument vectors array of the arguments.

int main(int argc,char* argv[]) {

    int i;

    printf("argc = %d\n",argc); // Printing our argument count!

    for (int i = 0; i < argc;i++){
        printf("argv[%d] -> \"%s\"",i,argv[i]); // Works like a normal array!
    }

}