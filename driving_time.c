#include<stdio.h>
#include<stdlib.h>

int main()
{
    int distance = 300;
    int speed = 80;
    int time = distance / speed;
    float speedInMinutes = speed / 60.0;
    int remainingMintues = (distance % speed) / speedInMinutes;
    printf("The time taken to travel %d Kilometer at %d Kilometer per hour is %d hours and %d minutes", distance, speed, time, remainingMintues);
    return 0;
}