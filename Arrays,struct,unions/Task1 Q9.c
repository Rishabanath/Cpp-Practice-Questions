//9. Program to implement Queue.

#include <stdio.h>
#include <stdlib.h>

# define size 100

int que[size];
int rear=-1,front=-1;

 
void enqueue()
{
    int item;
    if (rear == size-1)
       printf("\nOverflow \n");
    else
    {
        if (front==-1)
        front=0;
        printf("\nElement to be inserted in the Queue: ");
        scanf("%d",&item);
        rear=rear+1;
        que[rear]=item;
    }
} 
 
void dequeue()
{
    if (front==-1 || front>rear)
    {
        printf("\nUnderflow \n");
        return ;
    }
    else
    {
        printf("\nElement deleted from the Queue: %d\n", que[front]);
        front=front+1;
    }
} 
 
void show()
{
    
    if (front==- 1 || front>rear)
        printf("\nQueue empty\n");
    else
    {
        printf("\nQueue: ");
        for (int i=front; i<=rear; i++)
            printf("%d ",que[i]);
        printf("\n");
    }
}

int main()
{
	// Write C code here
    int choice;
    while (1)
    {
        printf("1.Add to queue\n");
        printf("2.Delete \n");
        printf("3.Display queue\n");
        printf("4.Exit\n");
        printf("Enter your choice of operations : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            {
                enqueue();
                break;
            }
            case 2:
            {
                dequeue();
                break;
            }
            case 3:
            {
                show();
                break;
            }
            case 4: exit(0);
            default: printf("Incorrect choice \n");
        } 
    } 
    return 0;
} 
