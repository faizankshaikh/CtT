/*
    Name: CtTp7_4.c
    Author: jalFaizy
    Timestamp: Wed Oct  7 20:00:53 IST 2015
    Description: Calculate perimeter and area of rectangle
*/

#include <stdio.h>

void rectangle(float, float, float *, float *);

int main()
{
    float length, width, area, perimeter;
    
    printf("Enter value for length and width of rectangle: ");
    scanf("%f %f", &length, &width);
    
    rectangle(length, width, &area, &perimeter);
    
    printf("\nGiven: \nLength = %-10.3f Width = %-10.3f\n", length, width);
    printf("\nCalculated: \nArea = %-10.3f Perimeter = %-10.3f\n", area, perimeter);

    return 0;
}

void rectangle(float L, float W, float *A, float *P)
{
    *A = L * W;
    *P = 2 * (L + W);
}

/*
    OUTPUT:
    
    Enter value for length and width of rectangle: 3 3

    Given: 
    Length = 3.000      Width = 3.000     

    Calculated: 
    Area = 9.000      Perimeter = 12.000  
*/  
