//5. C program to count occurrences of a character in a string.

#include <stdio.h>
#include <string.h>
 
int count(char s[],char c);

int main()
{
 
    char s[10],c;
    int scount;
    printf("Enter  the string : ");
    gets(s);
    for(int i=97;i<=122;i++)
    {
        c=(char)i;
        scount=count(s,c);
        if(scount>=1)
        {
            printf("\n'%c' occurs %d times \n ",c,scount);
        }
    }
 
	return 0;
 
}

int count(char s[],char c)
{
    int i,count=0;
    for(i=0;s[i];i++)  
    {
    	if(s[i]==c)
    	{
    	    count++;
		}
 	}
 	return count;
 }