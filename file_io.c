# include <stdio.h>

// Why File I/O
// Lets us persist data across runs.

int main(void){

    // Declare a file pointer.
    FILE *fp; // Initialize pointer.

    fp = NULL; // Initalizing it to null is good practice.

    // fopen() - Opening a File
    FILE *fopen(
        const char *path,
        const char *mode
    );

    // Different modes
    // "r" read (file must exist)
    // "w" write (creates/truncuates)
    // "a" appen (creates if needed)
    // "r+" read + write
    // "w+" read + write (truncuates)
    // "b" binary (append to any mode


    // Why do we check for null?
    // fopen returns NULL when:
    // file does not exists (mode r)
    // you lack permission
    // path is invalid
    // os has no more file handles available.
    // *NULL dereferencing can lead to undefined behavior


    

}
