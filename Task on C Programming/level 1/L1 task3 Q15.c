//15.Write a program in C to perform maths and character library function using switch case (use 5 operations on each)


#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main()
{
   int ch,x,y;
   float res,f;
   char c,dummy;
   printf("Choose:\n1.pow\n2.sqrt\n3.smallest int greater than or equal to x\n4.largest int less than or equal to x\n5.remainder\n6.isascii\n7.isalpha\n8.isdigit\n9.islower\n10.isupper\n Enter choice: ");
   scanf("%d",&ch);
   switch(ch)
   {
       case 1:
       {
           printf("Enter number x,y to find x^y: ");
           scanf("%d %d",&x,&y);
           res=pow(x,y);
           printf("\nans: %f",res);
           break;
       }
       case 2:
       {
           printf("Enter number to find sqrt: ");
           scanf("%d",&x);
           res=sqrt(x);
           printf("\nans: %f",res);
           break;
       }
       case 3:
       {
           printf("enter x: ");
           scanf("%f",&f);
           res=ceil(f);
           printf("\nans: %f",res);
           break;
       }
       case 4:
       {
           printf("enter x: ");
           scanf("%f",&f);
           res=floor(f);
           printf("\nans: %f",res);
           break;
       }
       case 5:
       {
           printf("enter 2 numbers: ");
           scanf("%d %d",&x,&y);
           res=fmod(x,y);
           printf("\nans: %f",res);
           break;
       }
       case 6:
       {
           printf("enter char: ");
           scanf("%d",&x);
           if(isascii(c))
           printf("char is in ascii range: ");
           else
           printf("not in ascii range");
           break;
       }
       case 7:
       {
           printf("enter char: ");
           scanf("%c",&dummy);
           scanf("%c",&c);
           if(isalpha(c))
           printf("char is alphabet ");
           else
           printf("not an alphabet");
           break;
       }
       case 8:
       {
           printf("enter char: ");
           scanf("%c",&dummy);
           scanf("%c",&c);
           if(isdigit(c))
           printf("char is a digit ");
           else
           printf("not a digit");
           break;
       }
       case 9:
       {
           printf("enter char: ");
           scanf("%c",&dummy);
           scanf("%c",&c);
           if(islower(c))
           printf("char is in lower case ");
           else
           printf("not in lower case");
           break;
       }
       case 10:
       {
           printf("enter char: ");
           scanf("%c",&dummy);
           scanf("%c",&c);
           if(isupper(c))
           printf("char is in upper case ");
           else
           printf("not in upper case");
           break;
       }
       default:
       printf("wrong choice");
   }
    
    return 0;
}