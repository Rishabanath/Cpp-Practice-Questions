//5. Create a structure called Time and convert the time into hours or minutes or seconds.

#include <stdio.h>

struct Time {
    int hours;
    float minutes,seconds;
};

int main()
{
    struct Time t;
    printf("Enter time in 24h format:\nHour: ");
    scanf("%d",&t.hours);
    printf("\nMinutes: ");
    scanf("%f",&t.minutes);
    printf("\nSeconds: ");
    scanf("%f",&t.seconds);
    printf("\nTime in hours: %f",(float)(t.hours+(t.minutes/60)+(t.seconds/3600)));
    printf("\nTime in minutes: %f",(float)((t.hours*60)+(t.minutes)+(t.seconds/60)));
    printf("\nTime in seconds: %d",((t.hours*3600)+(t.minutes*60)+(t.seconds)));
    return 0;
}
