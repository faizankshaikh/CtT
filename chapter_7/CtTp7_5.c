/*
    Name: CtTp7_5.c
    Author: jalFaizy
    Timestamp: Sun Oct 11 14:37:52 IST 2015
    Description: Example of pointer to a pointer
*/

#include <stdio.h>

int main()
{
    int a = 15, *p, **q;
    p = &a;
    q = &p;
    
    printf("p points to a, and address of a is %u\n", p);
    printf("a = %d, *p = %d\n", a, *p);
    printf("q points to p, and address of p is %u\n", q);
    printf("a = %d *p = %d *q = %d **q = %d\n", a, *p, *q, **q);

    return 0;
}
