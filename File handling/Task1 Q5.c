//5. To read numbers from a file and write even, odd numbers to separate files.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fPtrN,* fPtrE,* fPtrO;

    
    int num, success;
    char str[30];

    fPtrN   = fopen("numbers.txt", "w");
    fPtrE = fopen("even numbers.txt" , "w");
    fPtrO  = fopen("odd numbers.txt"  , "w");
    printf("Enter numbers:");
    gets(str);
    fprintf(fPtrN,"%s", str);
    fclose(fPtrN);
    fPtrN   = fopen("numbers.txt", "r");

    printf("opened\n\n");
    while (fscanf(fPtrN, "%d", &num) != -1)
    {
        if (num%2==0)
            fprintf(fPtrE, "%d\n", num);
        else
            fprintf(fPtrO, "%d\n", num);
    }
    fclose(fPtrN);
    fclose(fPtrE);
    fclose(fPtrO);

    printf("Numbers have been seperated");


    return 0;
}



