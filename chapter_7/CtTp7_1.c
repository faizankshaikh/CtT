/*
    Name: CtTp7_1.c
    Author: jalFaizy
    Timestamp: Fri Oct  2 22:38:23 IST 2015
    Description: Simple pointer program 
*/

#include <stdio.h>

int main()
{
    int a = 15, b = 21;
    int *p;
    
    // p points to a
    p = &a;
    printf("p points to a, and address of a is %u\n", p);
    printf("a = %d b = %d p = %d\n", a, b, *p);
    
    // p now points to b
    p = &b;
    printf("p points to b, and address of b is %u\n", p);
    printf("a = %d b = %d *p = %d\n", a, b, *p);
    
    return 0;
}

/*
    Output:
    
    p points to a, and address of a is 68603024
    a = 15 b = 21 p = 15
    p points to b, and address of b is 68603028
    a = 15 b = 21 *p = 21

*/
