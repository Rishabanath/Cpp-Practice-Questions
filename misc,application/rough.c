#include <stdio.h>
#include <time.h>
#define MAX 100
int count=0;

struct StudBook
{
    int Stud_Regno,No_of_books,Book_ID[5],IssueDate,ReturnDate;
    char Stud_name,Stud_dept;
};
struct StudBook stb[MAX];

void bookIssue()
{
    time_t Seconds;
    FILE *issueBook,*ttop;
    issueBook=fopen("BookIssue.txt","w");
    printf("Enter name: ");
    scanf("%s", &stb[count].Stud_name);
    printf("Student Registration number: %d",count);
    stb[count].Stud_Regno=count;
    printf("\nEnter department: ");
    scanf("%s", &stb[count].Stud_dept);
    printf("Number of books issued: ");
    scanf("%d", &stb[count].No_of_books);
    for(int i=0;i<stb[count].No_of_books;i++)
    {
        printf("Book %d ID: ",i);
        scanf("%d",&stb[count].Book_ID[i]);
    }
    Seconds = time(NULL);
    stb[count].IssueDate=Seconds;
    stb[count].ReturnDate=Seconds+36000;//10days 
    fwrite (&stb, sizeof(struct StudBook), 1, issueBook);
    if(fwrite!=0)
        printf("\ncontent written");
    else
        printf("\nUnable to write");
    count++;
    fclose(issueBook);
    ttop=fopen("txtAbove400.txt","w");
    issueBook=fopen("BookIssue.txt","r");
    while(fread(&stb, sizeof(struct StudBook), 1, issueBook)==1){ 
        for(int i=0;i<count;i++)
        fprintf(ttop, "%d\n%d\n%d\n%d\n%d\n", stb[i].Stud_name,stb[i].Stud_Regno,stb[i].Stud_dept,stb[i].No_of_books,stb[i].ReturnDate);
        }
    fclose (issueBook);
    fclose (ttop);
}

void bookRet()
{
    struct StudBook studBk;
    time_t Seconds;
    FILE *issueBook,*retBook,*issueBook1;
    int StudRegNo;
    issueBook1=fopen("BookIssue1.txt","w");
    issueBook=fopen("BookIssue.txt","r");
    retBook=fopen("BookReturned.txt","w");
    printf("Enter Registration number: ");
    scanf("%d", &StudRegNo);
    while(fread(&studBk, sizeof(struct StudBook), 1, issueBook))
    {
        printf("\nRegistration number: %d",studBk.Stud_Regno);
        if(studBk.Stud_Regno==StudRegNo)
        {
            int due;
            due=10*studBk.No_of_books;//amount per book=10
            printf("Name: %d\nRegno.: %d\nDepartment: %d\nNumber of books issued: %d\nDue date: %d\nDue amount: %d",studBk.Stud_name,StudRegNo,studBk.Stud_dept,studBk.No_of_books,studBk.ReturnDate,due);
            printf("\nIssued Books: ");
            for(int i=0;i<studBk.No_of_books;i++)
            {
                printf("\nBook %d ID: %d",i+1,studBk.Book_ID[i]);
            }
            printf("\nEnter option:\n1.Returned\n2.Not returned: ");
            int option;
            scanf("%d",&option);
            if(option==1)
                fwrite (&studBk, sizeof(struct StudBook), 1, retBook);
            else
                fwrite (&studBk, sizeof(struct StudBook), 1, issueBook1);
        }
        else
        {
            fwrite (&studBk, sizeof(struct StudBook), 1, issueBook1);
        }
    }
}

int main()
{
    char ch='y';
    while(ch=='y')
    {
        
        printf("\nEnetr choice:\n1.Books Issue\n2.Books Return: ");
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                bookIssue();
                break;
            }
            case 2:
            {
                bookRet();
                break;
            }
            default:printf("\nWrong choice");
        }
    printf("\nContinue(y/n): ");
    getchar();
    scanf("%c",&ch);
    }
    
    return 0;
}
