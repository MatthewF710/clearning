#include <stdio.h>

int main()
{
    char name[16] = "Hello World"; // 12 spots of memory, even though its 16 long. in order to be faster it creates all the segmented character memory slots, with the last spot always saved for \0, which indicates that its the end of the string
    char *x = name;                // this is a pointer, which points to the value in memory (wow who would've guessed). points to a raw memory in the computer, which can make things run faster
    char *y = &name[0];            // represents H in Hello world. when you call the array in x and ther first value of the array in y it represents the same chunk of memory. don't do this?
    char *z = &name[4];            // represents l in Hello world.
    printf("X=%p, Y=%p, Z=%p \n", x, y, z);
    return 0;
}