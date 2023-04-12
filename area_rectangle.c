#include<stdio.h>
#include<stdlib.h>

int main()
{
    double height, width;
    printf("Enter the height of the rectangle: ");
    scanf("%lf", &height);
    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);
    printf("The area of the rectangle is: %0.2lf", height * width);
    return 0;
}