//1.Write a program to calculate Simple Interest.


#include <stdio.h>

int main()
{
    int principal,time;
    float rate,si;
    printf("Enter principal amount P: ");
    scanf("%d",&principal);
    printf("Enter rate R: ");
    scanf("%f",&rate);
    printf("Enter time(years) T: ");
    scanf("%d",&time);
    si=((p*r*t)/100);
    printf("SI: %f",si);
	return 0;
}
