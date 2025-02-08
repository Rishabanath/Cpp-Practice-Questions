//11. Write a program in C to show the usage of pointer to the structure.

#include <stdio.h>
#include <stdlib.h>
struct Student
{
    char name[20];
    int age,roll;
};

int main()
{
    struct Student *studPtr, stud;
    studPtr = &stud;
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // allocating memory for n numbers of struct person
    studPtr = (struct Student*) malloc(n * sizeof(struct Student));

    for(int i=0;i<n;++i)
    {
        printf("Enter name: ");
        scanf("%s", &(studPtr+i)->name);
    
        printf("Enter age: ");
        scanf("%d", &(studPtr+i)->age);

        printf("Enter rollno: ");
        scanf("%d", &(studPtr+i)->roll);
    }
    printf("Display:\n");
    for(int i=0;i<n;++i)
    {
        printf("\nName: %s", (studPtr+i)->name);
        printf("\nAge: %d", (studPtr+i)->age);
        printf("\nrollno.: %d", (studPtr+i)->roll);
    }
    return 0;
}