#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    // Meet the 3 main converters:

    // atoi -> array to integer. easy to use but has no error detection.
    // strtol -> string to long integer.
    // strtod -> string to double/float point.

    // atoi (quick but unsafe)
    int n = atoi("67haha1"); // Reads digits and stops after no digits are found.
    printf("n atoi is: %d\n",n); // Thus this is just 67

    int m = atoi("xdddsas2"); // If the input is just garbage though.
    printf("m atoi is: %d\n",m); // Then the consequence this is just 0. BAD!



    // strtol (better and safer)
    // Let's look at it's anatomy:

    long strtol(const char *str, char **endptr, int base);
    // str is the string you want to convert.
    // endptr will be be send to a pointer, will update this pointer to point to the very first character where parsing stopped (typically \0)
    // base -> num base usually 10;

    char *end;
    long v =strtol("xddsas21",&end,10);
    if (*end != '\0') {  // Double checking to make sure the command worked. Pointer should be at \0.
    fprintf(stderr, "Invalid number\n"); // Trailing garbage detected!
}

    char *end2;
    long t = strtol("012212",&end2,10); // Valid!
    if (*end2 != '\0') {fprintf(stderr,"Invalid number\n");} else{printf("%ld\n",t);} // t actually stores the long int.
    // the pointer is just there to make sure the string was valid.

    // strtod (similar to strtol but for doubles)

    char *end_d;
    double d = strtod("3.14xex",&end_d);
    if (*end_d != '\0'){fprintf(stderr,"Invalid number\n");}else{printf(".2lf\n",d);} //Invalid

    char *end_p;
    double p = strtod("67.67",&end_p);
    if (*end_p != '\0'){fprintf(stderr,"Invalid number\n");}else{printf("%.2lf\n",p);} //Valid


}

