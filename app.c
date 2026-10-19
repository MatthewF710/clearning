#include <stdio.h> // printing stuff, reading files
#include <stdlib.h>
#include <ctype.h>   // size of bytes
#include <stdbool.h> // for using boolean
#include <string.h>  // for using string

#define COOL_NUMBER 7 // this is a macro, essentially another way of writing a variable. used a lot in esp32
// preprocessing directives, such as #include or #define do not require a semicolon
#define RECIPROCAL_OF_PI (1.0f / 3.14159f) // can also be an expression

int show_data_types()
{
    int x, y, z, i; // can NOT do this --> int x,char[]y,z, must be the same datatype
    // may want to establish a value, ex. 0, because c may set its own values for a variable
    char name[20]; // 20 is the most number of characters allowed. array of characters
    // you can NOT redeclare the value of a string. this is because it is technically an array
    //  for example, this wouldn't work name = "Steve";
    strcpy(name, "Steven"); // string copy, copies Steven to name this uses the library string.h
    x = 5;
    z = COOL_NUMBER * x;
    printf("x is %d, string is %s \n", x, name); // %d and %s are spacers for x and name. %d for int, %f for float, u can force f to display p digits after the decimal point, by putting .p btwn % and f, for ex %.2f. \n is required as it may sometimes error without it.
    scanf("%d", &i);                             // Takes a user input. reads the integer and puts the value into i. can do the same for floats w/ %f.
    return 1;
}

int main()
{
    return 0;
}