#include <stdio.h>
#include <stdlib.h>
int add(int x, int y)
{
    int z = x + y;
    return z;
} // this requires no pointers as you aren't editing any of the input to be something else
int double_x(int *x) // pointer points to a value in memory
{                    // passes through the mem location of X to manipulate the original value
    *x = *x * 2;
} // this requires a pointer becauase you are editing the original value
int main()
{              // main creates a function scope (block of memory which is a stack, containing different mem addresses)
    int x = 4; // say this exists at mem location 1004
    int nums[4] = [
        1, // say this is mem location 1005
        2, // say this is mem location 1006
        3  // say this is mem location 1007
    ];
    double_x(&x); // passes through mem location 1004 and actually edits the value
    z = *y;       // a pointer of y points to the first value in mem, aka 1005 which is 1
    // in a function you can only return one value in c. in order to return more than one you declare the value outside the function and use pointers to edit them.
}
// in a seperate stack of memory called the heap, global variables are stored. You can manually edit the data within the heap, such as shortening, removing data, etc.

int double_x(int &x)
{
    *x = *x * 2;
}