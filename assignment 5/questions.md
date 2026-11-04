Problem 1: Write a swap function
Write a function swap that exchanges the values of two int variables in main. Then complete main so it prints Before: x=3 y=9 and After: x=9 y=3.
Why you need pointers here: x and y live inside main. When you call a function, C hands it copies of the values, so a function that swaps its copies changes nothing in main. If you instead give swap the addresses of x and y (&x, &y), the function can use \* to reach back into main's memory and change the real variables.

```C
#include <stdio.h>

int main(void) {
    int x = 3, y = 9;
    printf("Before: x=%d y=%d\n", x, y);
    // call swap here
    printf("After: x=%d y=%d\n", x, y);
    return 0;
}
```

Problem 2: Find the smallest and largest
A function can only return one value, but pointers let it send back more.

Why you need pointers here: you need two answers back (the smallest and the largest), but return can only send back one. So main creates two empty variables, lo and hi, and passes their addresses. minMax writes its answers into those addresses with *min = ... and *max = ..., and when it finishes, lo and hi hold the results. The array parameter int *arr is a pointer too: passing an array always passes the address of its first element, which is why you also pass the length n.
void minMax(int *arr, int n, int *min, int *max);
It should look through the n numbers in arr and store the smallest in *min and the largest in *max. Test it with this main, which should print min = -2, max = 9:

```C
int main(void) {
    int data[5] = {4, -2, 9, 0, 7};
    int lo, hi;
    minMax(data, 5, &lo, &hi);
    printf("min = %d, max = %d\n", lo, hi);
    return 0;
}
```

Challenge: rewrite the loop inside minMax using pointer arithmetic (\*(arr + i) or a moving pointer) instead of arr[i].

Q3
Problem 5: Reverse an array in place with two pointers
Write a function that reverses an array without using a second array and without using square brackets [ ] inside the function:
void reverseArray(int \*arr, int n);
Use two pointers: left starting at the first element and right starting at the last. Swap the values they point to, then move them toward each other until they meet.
Test it with this main, which should print 6 5 4 3 2 1:

```C
int main(void) {
    int data[6] = {1, 2, 3, 4, 5, 6};
    reverseArray(data, 6);
    for (int i = 0; i < 6; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}
```

Why you need pointers here: an array passed to a function is really the address of its first element, so the function works on main's actual array, not a copy. That's why the changes are still there after the function returns. The two pointers also let you walk the array from both ends using pointer arithmetic (arr + n - 1 is the address of the last element).
Answer in a sentence: does your function still work for an array with an odd number of elements, like {10, 20, 30, 40, 50}? What happens to the middle element?
