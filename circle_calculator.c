#include <stdio.h>
#include <math.h>

// Circle Calculator Program

int main(){


// Declare variables
double radius = 0.0;
double area = 0.0;
double surfaceArea = 0.0;
double volume = 0.0;
const double PI = 3.14159;


// Input
printf("Enter the radius: ");
scanf("%lf", &radius);


// Calculation
area = PI * pow(radius, 2);
surfaceArea = 4 * PI * pow(radius, 2);
volume = (4.0/3.0) * PI * pow(radius, 3);


// Output
printf("Area: %.2lf", area);
printf("\nSurface Area: %.2lf", surfaceArea);
printf("\nVolume: %.2lf", volume);


    return 0;
}
