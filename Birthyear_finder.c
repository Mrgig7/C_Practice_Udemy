#include<stdio.h>
#include<stdlib.h>

int main()
{
    int currentYear;
    int birthYear;
    int age;

    scanf("%d", &currentYear);
    scanf("%d", &age);

    birthYear = currentYear - age;

    printf("You were born in %d \n", birthYear);

    return 0;
}