//4. Create a structure called Date and calculate the difference between the two dates.

#include<stdio.h>

struct date
{
    int d,m,y;
};

int main()
{
    // Write C code here
    struct date d1,d2,d;
	printf("Enter first date in dd mm yyyy format: ");
	scanf("%d %d %d",&d1.d,&d1.m,&d1.y);
	printf("Enter second date in dd mm yyyy format: ");
	scanf("%d %d %d",&d2.d,&d2.m,&d2.y);
	if(d2.d<d1.d)
	{
		if(d2.m==2)
		{
			if(((d2.y%100)!=0 && (d2.y%4)==0)  ||  (d2.y%400)==0) 
				d2.d=d2.d+29;
			else
				d2.d=d2.d+28;
		}
		else if(d2.m==5 || d2.m==7 || d2.m==10 || d2.m==12)
			d2.d=d2.d+30;
		else
			d2.d=d2.d+31;
		d2.m=d2.m-1;
	}
	if(d2.m<d1.m)
	{
		d2.y=d2.y-1;
		d2.m=d2.m+12;
	}
	d.y=d2.y-d1.y;
	d.m=d2.m-d1.m;
	d.d=d2.d-d1.d;
	printf("Difference of the two dates: %d years %d months %d days\n",d.y,d.m,d.d);
	return 0;
}