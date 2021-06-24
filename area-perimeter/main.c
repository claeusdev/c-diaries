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

    printf("Area is %lf and the perimeter is %lf", area, perimeter);
    return 0;
}