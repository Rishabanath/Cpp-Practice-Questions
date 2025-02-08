//6. Write a c program to read and print an employee’s details like name, employee id, salary using structure.

#include <stdio.h>
// #include <string.h>

typedef struct employee {
    char name[10];
    int emp_id,salary;
}employee;

employee read();
void write(employee c);

int main() {
    employee n[10];
    int i=0;
    char ch='y';
    while(ch=='y')
    {
        n[i]=read();
        printf("\nContinue(y/n)?: ");
        ch='y';
        getchar();
        scanf("%c",&ch);
        i++;
    }
    i--;
    for(;i>=0;i--)
    write(n[i]);

    return 0;
}

employee read()
{
    employee n1;
    printf("\nEnter name: ");
    scanf("%s", &n1.name);
    printf("\nEnter emplopyee ID: ");
    scanf("%d", &n1.emp_id);
    printf("\nEnter salary: ");
    scanf("%d", &n1.salary);
    return(n1);
}

void write(employee write)
{
    printf("\nName: %s",write.name);
    printf("\nEmplopyee ID: %d",write.emp_id);
    printf("\nSalary: %d",write.salary);
}