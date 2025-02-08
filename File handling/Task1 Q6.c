//6. To append content to a file.

#include <stdio.h>
 
int main()
{
    FILE *fp;
    char ch,str[20],str2[20];
    fp = fopen("file.txt", "w");
   
    printf("\nEnter content to file:\n");
    gets(str);
    fprintf(fp,"%s", str);
    fclose(fp);
    fp = fopen("file.txt", "a");
    printf("\nEnter content to append to file:\n");
    gets(str2);
    fprintf(fp,"%s", str2);
    fclose(fp);
    fp = fopen("file.txt", "r");
    
    printf("\nContents of %s: \n", "file.txt");
    
    while (1)
    {
        ch = fgetc(fp);
        if(ch!=EOF)
        printf ("%c", ch);
		else
		break;
    }

    fclose(fp);

    return 0;
}