#include<stdio.h>
#include<stdlib.h>

int main()
{
    float salary;
    int totalHours;

    printf("Enter your Salary per hour: ");
    scanf("%f", &salary);
    printf("Enter the total hours worked: ");
    scanf("%d", &totalHours);

    float grossPay = salary * totalHours;
    float tax = grossPay * 0.2;

    printf("Your gross pay is %.2f and your tax is %.2f", grossPay, tax);

    return 0;
}