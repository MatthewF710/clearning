#include <stdio.h>

struct Point
{ // like a type or object in python. wraps multiple vars in one struct. you can access multiple at a time
    int x;
    int y;
}

enum Day
{              // allows you to use names while keeping memory usage limited
    SUNDAY,    // 0
    MONDAY,    // 1
    TUESDAY,   // 2
    WEDNESDAY, // 3
    THURSDAY,  // 4
    FRIDAY,    // 5
    SATURDAY   // 6
}

union Data
{ // similar to struct. calls only one piece of data at a time while writing to the same point in ram. only access one at a time
    int i;
    float f;
}