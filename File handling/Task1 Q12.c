//12. To replace a specific line in a file with a line of another file. 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	// Write C code here
	FILE *fp1,*fp2,*fp3;
	char word[200], ch, read[200],read2[200];
    int line=1,lineno,lineno2,line2=1;
	fp1 = fopen("file.txt", "r");
	fp2 = fopen("file2.txt", "r");
	fp3 = fopen("replaced.txt", "w+");
	if (fp1 == NULL || fp2 == NULL) {
		printf("Can't open file.");
		exit(0);
	}
	printf("Conetens in file.txt:\n");
	while (1) 
	{
		ch = fgetc(fp1);
		if (ch == EOF) {
			break;
		}
		printf("%c", ch);
	}
	printf("Conetens in file2.txt:\n");
	while (1) 
	{
		ch = fgetc(fp1);
		if (ch == EOF) {
			break;
		}
		printf("%c", ch);
	}

	puts("\n\nEnter line number to remove from file.txt:");
	scanf("%d",&lineno);
	puts("\n\nEnter line number to add from file2.txt:");
	scanf("%d",&lineno2);
	rewind(fp1);
	rewind(fp2);
	while (!feof(fp1)) 
        {
            fgets(read, 200, fp1);
            {
            if (line==lineno)
            {
                while (!feof(fp2))
                {
                     fgets(read2, 200, fp2);
                     if (line2==lineno2)
                     {
                         fprintf(fp3, "%s", read2);
                     }
                     line2++;
                }
                line++;
                
            }
            else 
                {
                    fprintf(fp3, "%s", read);
                    line++;
                }
            }
        }
        printf("\n");

	rewind(fp3);
	while (1) {
		ch = fgetc(fp3);
		if (ch == EOF) {
			break;
		}
		printf("%c", ch);
	}

	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	return 0;
}
