//13.Write a program in C to read any month number in integer and display the month name in. the word.(using switch case)


#include<stdio.h>

int main()
{
    int mon;
    printf("enter month number :");
    scanf("%d",&mon);
    switch(mon)
    {
        case 1:{printf("january");break;}
        case 2:{printf("febuary");break;}
        case 3:{printf("march");break;}
        case 4:{printf("april");break;}
        case 5:{printf("may");break;}
        case 6:{printf("june");break;}
        case 7:{printf("july");break;}
        case 8:{printf("august");break;}
        case 9:{printf("september");break;}
        case 10:{printf("october");break;}
        case 11:{printf("november");break;}
        case 12:{printf("december");break;}
        default:printf("wrong number");
        
    }
    
    return 0;
}