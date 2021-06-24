/*
    Autthor: Nana Adjei Manu
    Purpose: Calculate Area and Perimeter of Rectangle
*/

#include <stdio.h>

int main(){

    double width;
    double height;
    double area;
    double perimeter;

    printf("Enter your area followed by perimeter \n");
    scanf("%lf %lf", &width, &height);

    area = width * height;
    perimeter = (width + height) * 2;

    printf("Area is %.2lf and the perimeter is %.2lf", area, perimeter);
    return 0;
}