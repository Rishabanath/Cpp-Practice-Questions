//14.Write a program by using switch case if user enter 11 it will have are area of circle and when user enter 22 it will have area of rectangle and when user enter 33 it will give area of square when user enter 44 it will give area of triangle.


#include<stdio.h>

int main()
{
    int ch,r,l,b,s,h,t;
    printf("enter 11 22 33 44 to get area of circle, rectangle,square,triangle resp:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 11:{
            printf("Enter radius of circle: ");
            scanf("%d",&r);
            printf("area of circle: %f",(float)(2*22*r*r/7));
            break;}
        case 22:{
            printf("Enter length and breadth of rectangle: ");
            scanf("%d %d",&l,&b);
            printf("area of rectangle: %f",(float)(l*b));
            break;}
        case 33:{
            printf("Enter side of square: ");
            scanf("%d",&s);
            printf("area of square: %f",(float)(s*s));
            break;}
        case 44:{
            printf("Enter height and base of triangle: ");
            scanf("%d %d",&h,&t);
            printf("area of trinagle: %f",(float)(0.5*t*h));
            break;}
        default:printf("wrong number");
        
    }
    
    return 0;
}