//1. Add two distances and also convert inches into feet and vice-versa using structure (in inch-feet)

#include <stdio.h>

struct Distance {
   int feet;
   int inch;
};

int main()
{
    // Write C code here
    struct Distance dist;
    // float result;
    printf("\nEnter distance in feet: \n");
    scanf("%d",&dist.feet);
    printf("\nEnter distance in inch: \n");
    scanf("%d",&dist.inch);
    // printf("\n feet to inch: %d %d",(dist.feet),dist.inch);
    printf("\nConvert %d feet to inch: %d",dist.feet,(dist.feet*12));
    printf("\nConvert %d inches to feet: %d",dist.inch,(dist.inch/12));
	printf("\nAdding both distance: \nin feet: %d\nin inches: %d",(dist.feet+(dist.inch/12)),(dist.inch+(dist.feet*12)));
    
    return 0;
}