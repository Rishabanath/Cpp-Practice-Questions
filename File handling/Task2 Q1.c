//1. To create an Employee detail using structure and store the same in a file using fscanf() and fprintf() functions.

#include<stdio.h>
#define MAX 20
struct Employee
{
	char empname[MAX];
	int empid,salary;	
};
int main()
{
	FILE *fptr;
	fptr = fopen("result.txt","w");
	printf("Enter the number of employees : ");
	int i,n;
	scanf("%d",&n);
	struct Employee e[n];
	for(i=0;i<n;i++)
	{
	    printf("\nEmployee %d details:\nEmp ID:",i+1);
		fscanf(stdin,"%d",&e[i].empid);
		printf("Emp Name:");
		fscanf(stdin,"%s",e[i].empname);
		printf("Emp salary:");
		fscanf(stdin,"%d",&e[i].salary);
		fprintf(fptr,"Emp ID: %d Emp Name: %s Emp salary: %d\n",e[i].empid,e[i].empname,e[i].salary);
	}
	return 0;
}