//8. To remove a specific line from a text file.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fp1, *fp2;
	char word[200], ch, read[200];
    int line=1,lineno=0;
	fp1 = fopen("file.txt", "r");
	fp2 = fopen("replaced.txt", "w+");
	if (fp1 == NULL || fp2 == NULL) {
		printf("Can't open file.");
		exit(0);
	}
	printf("Conetens in file:\n");
	while (1) {
		ch = fgetc(fp1);
		if (ch == EOF) {
			break;
		}
		printf("%c", ch);
	}

	puts("\n\nEnter line number to remove:");
	scanf("%d",&lineno);
	rewind(fp1);
	while (!feof(fp1)) 
        {
            fgets(read, 200, fp1);
            {
            if (line==lineno) 
            line++;
            else 
                {
                    fprintf(fp2, "%s", read);
                    printf("%d ", line);
                    line++;
                }
            }
        }
        printf("\n");

	rewind(fp2);
	while (1) {
		ch = fgetc(fp2);
		if (ch == EOF) {
			break;
		}
		printf("%c", ch);
	}

	fclose(fp1);
	fclose(fp2);
	return 0;
}

