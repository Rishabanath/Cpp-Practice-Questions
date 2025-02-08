/*12.Write a program to take input of 5 subject. Find total and percent based on percent provide grade like:

             IF Per > 80 “A+”

             Per >= 65 and per <=80 “A”

             Per > =50 and per <=65 “B”

             Per >= 42 and per <=50 “C”

             Per < 42 “Fail”*/
#include<stdio.h>

int main()
{
    int mat,sci,eng,soc,tam,tot;
    float pec;
    printf("\nEnter 5 subject marks/100: ");
    scanf("%d %d %d %d %d",&mat,&sci,&eng,&soc,&tam);
    tot=mat+sci+soc+tam+eng;
    pec=tot/5;
    printf("\ntotal: %d\n",tot);
    printf("percentage: %f",pec);
    
    printf("\nResult: ");
    if(pec>80)
    printf("A+");
    else if(pec<=80 && pec>65)
    printf("A");
    else if(pec<=65 && pec>50)
    printf("B");
    else if(pec<=50 && pec>42)
    printf("C");
    else
    printf("Fail");
    
    return 0;
}