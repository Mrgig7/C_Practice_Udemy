#include<stdio.h>
#include<stdlib.h>

int main()
{
    float a1,d;
    int n;
    printf("Enter the first term of the arithmetic progression: ");
    scanf("%f",&a1);
    printf("Enter the common difference of the arithmetic progression: ");
    scanf("%f",&d);
    printf("Enter the number of terms of the arithmetic progression: ");
    scanf("%d",&n);
    float an = a1 + (n-1)*d;
    float sum = (n/2.0)*(a1+an);
    printf("The nth term of the arthmetic sequence = %0.2f \n",an);
    printf("The sum of the first %d terms of the arithmetic progression is %.2f",n,sum);
    return 0;
    
}