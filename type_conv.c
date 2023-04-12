#include<stdio.h>
#include<stdlib.h>

int main()
{
    int grade1, grade2, grade3;
    double average;
    printf("Enter grade 1 ");
    scanf("%d", &grade1);
    printf("Enter grade 2 ");
    scanf("%d", &grade2);
    printf("Enter grade 3 ");
    scanf("%d", &grade3);
    average = (grade1 +(double) grade2 + grade3) / 3.0;
    printf("The average is %.2lf \n",average);
}