//5. Calculate the volume through inline function.

#include <stdio.h>

int area(int a)
{
    return (a*a);
}

int main()  
{
    int a;
    printf("Enter side of square(a): ");
    scanf("%d",&a);
    printf("area= %d",area(a));
    
    return 0;
} 
