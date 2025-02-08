/*13. Program to read 10 student details from a file and write them into another file for those who have total marks>400 or Average>80.
	Note: RNo, Name, Course, Mark-1,Mark-2,Mark-3,Mark-4,Mark-5,Total and Average as 		
	fields of a Student structure.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student 
{
    int rollno,mark1,mark2,mark3,mark4,mark5,total,avg;
    char name[20],course[10];
};
int main () 
{
	// Write C code here
    FILE *list;
    list= fopen ("StudentList.txt", "w");
    if (list == NULL) {
        fprintf(stderr, "\nError to open the file\n");
        exit (1);
    }
    struct Student stu[10];
    printf("Enter student details: \n");
    for(int i=0;i<2;i++)
    {
        printf("Student%d:\n",i+1);
        printf("Name: ");
        scanf("%s",&stu[i].name);
        printf("\nRollno.: ");
        scanf("%d",&stu[i].rollno);
        printf("\nEntern 5 subject marks: ");
        scanf("%d %d %d %d %d",&stu[i].mark1,&stu[i].mark2,&stu[i].mark3,&stu[i].mark4,&stu[i].mark5);
        printf("\nEnter course name: ");
        scanf("%s",&stu[i].course);
        stu[i].total=stu[i].mark1+stu[i].mark2+stu[i].mark3+stu[i].mark4+stu[i].mark5;
        stu[i].avg=(stu[i].total/5);
        fwrite (&stu[i], sizeof(struct Student), 1, list);
    }
    if(fwrite != 0)
        printf("Contents to file written successfully !\n");
    else
        printf("Error writing file !\n");
    fclose (list);
    FILE *top,*ttop;
    struct Student stud;
    list=fopen ("StudentList.txt", "r");
    top=fopen("Above400.txt","w");
//  if (top == NULL) {
//      fprintf(stderr, "\nError to open the file\n");
//      exit (1);
//   }
    while(fread(&stud, sizeof(struct Student), 1, list))
        {if(stud.total>400)
        {
            fwrite (&stud, sizeof(struct Student), 1, top);
        }}
        fclose (top);
        top=fopen("Above400.txt","r");
        ttop=fopen("txtAbove400.txt","w");
    while(fread(&stud, sizeof(struct Student), 1, top)==1){ 
        fprintf(ttop, "%s\n%d\n%d\n%d\n%d\n%d\n%d\n%s\n%d\n%d", stud.name,stud.rollno,stud.mark1,stud.mark2,stud.mark3,stud.mark4,stud.mark5,stud.course,stud.total,stud.avg);
        }
    fclose (top);
    fclose (list);
}
