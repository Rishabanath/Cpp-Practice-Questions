// 1.Create an array that contains "yourname" where add 1 to the content of odd-numbered locations and subtract 1 from the even-numbered locations.

#include <stdio.h>

int main() {
    // Write C code here
    char num[]="Rishabanath K";
    printf("Name: Rishabanath K\nName: ");
    int size=sizeof(num)/sizeof(num[0]);
	for(int i=0;i<size;i++)
	{
	    if((i%2)==0)
	    num[i]=num[i]-1;
	    else
	    num[i]=num[i]+1;
		printf("%c",num[i]);

	}

    return 0;
}
