//2. Program to remove duplicate letters in a file.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fptr1, *fptr2;
	char c,str[20];
	int arr[27],ind=97;
	for(int i=0;i<27;i++)
	arr[i]=ind++;

	fptr1 = fopen("file1", "w");
    printf("Enter string:");
    gets(str);
    fprintf(fptr1,"%s", str);
    fclose(fptr1);
    fptr1 = fopen("file1", "r");
	fptr2 = fopen("file2", "w");
	c = fgetc(fptr1);
	int i=0;
	while (c != EOF)
	{
	    for(int i=0;i<27;i++){
	        if(c==arr[i]&&arr[i]!=-1)
	        {arr[i]=-1;
	        fputc(c, fptr2);}
	    }
 		
		c = fgetc(fptr1);
	}
	fclose(fptr1);
	fclose(fptr2);
	return 0;
}
