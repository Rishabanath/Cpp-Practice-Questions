//8. Create a user defined enum type for days of week and display all.

#include <stdio.h> 

enum weekdays{Sunday=100, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday}w;  

int main()  
{
    for(int i=Sunday;i<Sunday+7;i++)
    {
        if(i==Sunday)
        printf("Sunday");
        if(i==Monday)
        printf("Monday");
        if(i==Tuesday)
        printf("Tuesday");
        if(i==Wednesday)
        printf("Wednesday");
        if(i==Thursday)
        printf("Thursday");
        if(i==Friday)
        printf("Friday");
        if(i==Saturday)
        printf("Saturday");
        printf("\n");
    }
    
    return 0;  
}  