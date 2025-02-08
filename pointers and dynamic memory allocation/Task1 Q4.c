//4. Write a C program to create a Stack along with writing a code to create, insert, delete, search, traverse and display all the nodes.

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void push(int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

void pop()
{
    struct node *temp;
    if(head == NULL)
        printf("Stack is Empty\n");
    else
    {
        printf("Poped element = %d\n", head->data);
        temp = head;
        head = head->next;
        free(temp);
    }
}

void printList()
{
    struct node *temp = head;
    while(temp != NULL)
    {
         printf("%d->", temp->data);
         temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    int choice,insert;
    char cont;
    cont='y';
    while(cont=='y')
    {
    printf("\nEnter choice:\n1.Insert\n2.Pop\n3.Display :");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
        {
            printf("\nEnter number: ");
            scanf("%d",&insert);
            push(insert);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            printList();
            break;
        }
        default:printf("\nEnter correct choice");
    }
    printf("Continue(y/n)?");
    getchar();
    scanf("%c",&cont);
    }
    return 0;
}