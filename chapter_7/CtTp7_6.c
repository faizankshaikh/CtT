/*
    Name : CtTp7_6.c
    Author : jalFaizy
    Timestamp : Wed Oct 14 00:45:20 IST 2015
    Description : WAP which reads in array and calculates its sum using pointers
*/

#include <stdio.h>

int main()
{
    int a[5], *p, s, i;
    
    printf("Enter 5 integer values : \n");
    
    for (i = 0; i < 5; i++)
        scanf("%d", a + i);
        
    s = 0; p = a;
    
    for (i = 0; i < 5; i++)
        s += *p++;
        
    printf("Sum is %d\n", s);

    return 0;
}

/* OUTPUT
    Enter 5 integer values : 
    1 2 3 4 5
    Sum is 15

*/
