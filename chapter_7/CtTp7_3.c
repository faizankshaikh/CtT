/*
    Name: CtTp7_3.c
    Author: jalFaizy
    Timestamp:  Sun Oct  4 14:14:36 IST 2015
    Description: Swap function using pointers
*/

#include <stdio.h>

void swap(int *, int*);

int main()
{
    int x = 3, y = 5;
    
    printf("x = %d, y = %d\n", x, y);
    
    swap(&x, &y);
    
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

/*
    Output: 
    
    x = 3, y = 5
    x = 5, y = 3

*/
