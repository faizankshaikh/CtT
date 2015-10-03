/*
    Name: CtTp7_2.c
    Author: jalFaizy
    Timestamp: Sun Oct  4 01:04:18 IST 2015
    Description: To find out average of two numbers via their pointers
*/

#include <stdio.h>

int main()
{
    int x, y, z;
    int *px = &x, *py = &y, *pz = &z;
    
    printf("Enter value for x and y: ");
    scanf("%d %d", px, py);
    
    *pz = (*px + *py) / 2;
    
    printf("Values of x, y, z are: %d %d %d\n", x, y, z);
    printf("Values pointed by px, py, pz are: %d %d %d", *px, *py, *pz);

    return 0;
}   

/*
    Output:
    
    Enter value for x and y: 2 6
    Values of x, y, z are: 2 6 4
    Values pointed by px, py, pz are: 2 6 4
    
*/
