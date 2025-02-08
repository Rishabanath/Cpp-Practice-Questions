//2. Build the basic management application by your own choice using functions.

#include <stdio.h>
#include<string.h>
static int count=0;
struct Books
{
    int bkdate,serial;
    char bkname[10],auth[10];
};

struct Books b[10];
 void addBook();
 void searchBooks();
 void viewBooks();
 void deleteBooks();

int main()
{
    int choice = 0;
    do
    {
        printf("\n1.Add Books\n2.Search Books\n3.View Books\n4.Delete Book\n5.Exit\nEnter choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            addBook();
            break;
        case 2:
            searchBooks();
            break;
        case 3:
            viewBooks();
            break;
        case 4:
            deleteBooks();
            break;
        case 5:
            printf("\nThank you!!!\n");
            break;
        default:
            printf("\nInvalid option");
        }                                          
    }
    while(choice!=5);
    return 0;
}

void addBook()
{
    
    printf("Enter book details: ");
    printf("Book name: ");
    scanf("%s",&b[count].bkname);
    printf("Book date: ");
    scanf("%d",&b[count].bkdate);
    printf("Book serial number: ");
    scanf("%d",&b[count].serial);
    printf("Book author: ");
    scanf("%s",&b[count].auth);
    printf("Book added: ");
    count=count+1;
}

void searchBooks()
{
    char name[10];
    int f=-1;
    printf("Book name: ");
    scanf("%s",&name);
    
    printf("1");
    for(int i=0;i<count;i++)
    {
        printf("2");
        printf("\nBook name: %s",b[i].bkname);
        if((name,b[i].bkname)==1)
        f=i;
        printf(">>f= %d\n",f);
    }
    printf("f= %d",f);
    if(f>-1){
    printf("\nAvailable\nBook details: ");
    printf("\nBook name: %s",b[f].bkname);
    printf("\nBook date: %d",b[f].bkdate);
    printf("\nBook serial number: %d",b[f].serial);
    printf("\nBook author: %s",b[f].auth);
    }
    else
    printf("Book unavailable");
    
}

void viewBooks()
{
    for(int i=0;i<count;i++)
    {
        printf("\nBook details: ");
        printf("\nBook name: %s",b[i].bkname);
        printf("\nBook date: %d",b[i].bkdate);
        printf("\nBook serial number: %d",b[i].serial);
        printf("\nBook author: %s",b[i].auth);
    }
}

void deleteBooks()
{
    char name[10];
    int f=-1;
    printf("Book name: ");
    scanf("%s",&name);
    printf("Book name: %s",name);
    printf("11");
    for(int i=0;i<count;i++)
    {
        printf("\nBook name: %s",b[i].bkname);
        printf("\n22");
        if(strcmp(name,b[i].bkname)==1)
        f=i;
    }
    printf("ff= %d",f);
    if(f!=-1)
    {
        for(int i=f;i<count-1;i++)
        {
            strcpy(b[i].bkname, b[i+1].bkname);
            b[i].bkdate=b[i+1].bkdate;
            b[i].serial=b[i+1].serial;
            strcpy(b[i].auth,b[i+1].auth);
            printf("Book deleted ");
        }
    }
    else
    printf("Book unavailable");
}
