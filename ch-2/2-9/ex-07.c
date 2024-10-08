#include <stdio.h>

// Write a function invert(x,p,n)  that returns x with the n bits that begin at position
// p inverted (i.e. 1 changed to 0 and vice versa, leaving the others unchanged)

unsigned invert(unsigned x, int p, int n);

int main()
{
    unsigned res = invert(128, 8, 3);
    printf("value: %u", res);

    return 0;
}

unsigned invert(unsigned x, int p, int n)
{
    return x ^ ~(~0 << n) << (p - n);
}