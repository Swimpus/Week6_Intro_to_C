# include <stdio.h>

// What are command line arguments

/* Ex.
./ myprogram input.txt output.txt
*/

// Everything after the program name is an argument.
// Arguments arrives as strings - always.
// Shell(aka command prompt) passes to main

// The main signature with arguments

// int main(int argc, char *argv[])

// Parameter    | Meaning
// argc         | Argument count (always >= 1)
// argv         | Argument vector (array of strings)

// argc = 3
// argv[0] = "./myprogram"
// argv[1] = "input.txt"
// argv[2] = "output.txt"
// argv[3] = NULL

// *Note how argv is a pointer to a poinyer.


// -------------------------------------------------
// argv in