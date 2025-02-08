// 5.Create an array that contains any string, where remove all occurrences of any special characters and spaces and find the length of the string w/o using strlen().

#include <stdio.h>

int main() {
    // Write C code here
    char sample[]="rishab@245#!^tre&~`/",sample1[20];
    int j=0,size=sizeof(sample)/sizeof(sample[0]);
    printf("\nsample= %s\n",sample);
    printf("\nsize of sample= %d\n",size);
    for(int i=0;i<size;i++)
    {
        if((sample[i]>=48 && sample[i]<=57)||(sample[i]>=65 && sample[i]<=90)||(sample[i]>=97 && sample[i]<=122)==1)
        {
            sample1[j]=sample[i];
            j++;
        }
        else
        sample1[j]=NULL;
    }
    printf("\nsample= %s\n",sample1);
    printf("\nsize of sample= %d",j);
    return 0;
}
