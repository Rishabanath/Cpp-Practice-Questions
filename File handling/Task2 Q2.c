/*2. Program to write 10 Product details to a file and write them into separate files based on the type (packed, fresh) of the product. Update stock when it reaches below or 5.
	Note: PNo, PName, Type, Quantity, CostperUnit as 	fields of a Product structure.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product 
{
    int pno,quantity,CostPerUnit;
    char pname[20],type[10];
};
int main () 
{
	// Write C code here
    FILE *list;
    list= fopen ("ProductList", "w");
    if (list == NULL) {
        fprintf(stderr, "\nError to open the file\n");
        exit (1);
    }
    struct Product prod[10];
    printf("Enter product details: \n");
    for(int i=0;i<2;i++)
    {
        printf("Product%d:\n",i+1);
        printf("Product Name: ");
        scanf("%s",&prod[i].pname);
        printf("\nproduct no.: ");
        scanf("%d",&prod[i].pno);
        printf("\nCost per unit: ");
        scanf("%d",&prod[i].CostPerUnit);
        printf("\nProduct type: ");
        scanf("%s",&prod[i].type);
        fwrite (&prod[i], sizeof(struct Product), 1, list);
    }
    if(fwrite != 0)
        printf("Contents to file written successfully !\n");
    else
        printf("Error writing file !\n");
    fclose (list);
    FILE *pkd,*frsh;
    struct Product pro;
    list=fopen ("ProductList", "r");
    pkd=fopen("Packed","w");
    frsh=fopen("Fresh","w");
//  if (pkd == NULL) {
//      fprintf(stderr, "\nError to open the file\n");
//      exit (1);
//   }
    while(fread(&pro, sizeof(struct Product), 1, list)){
        // printf("Error writing file1 !\n");
        if(strcmp(pro.type,"packed")==0)
        {
            // printf("Error writing file 3!\n");
            fprintf(pkd, "Pname: %s\nPnumber: %d\nPcost: %d\nType: %s", pro.pname,pro.pno,pro.CostPerUnit,pro.type);
        
        }
        else
        {
            // printf("Error writing file 2!\n");
            fprintf(frsh, "Pname: %s\nPnumber: %d\nPcost: %d\nType: %s", pro.pname,pro.pno,pro.CostPerUnit,pro.type);
        }
    }
    fclose (pkd);
    fclose(frsh);
    fclose (list);
}