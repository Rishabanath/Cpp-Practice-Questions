//7. Program to evaluate the balanced parenthesis using stack.

#include<stdio.h>  

int top=0;
char Pop(char arr[])
{
	if(top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		return(arr[top]);
	}
}

int main()  
{  
    // Write C code here
    char exps[10];  
    int x=0; 
    top=sizeof(exps)/sizeof(exps[0]);
    printf("\nEnter an expression");  
    scanf("%s", &exps);  
    top=sizeof(exps)/sizeof(exps[0]);
    while(top>-1)  
    { 
    char ch=Pop(exps);
    if(ch==')')  
        {  
            x++;      
        }  
     
     else if(ch=='(')  
        {  
            x--;   
            if(x<0)  
            break;  
        }  
    top--; 
    }  
    if(x==0)  
    {  
        printf("Balanced parenthsis");  
    }  
      
    else  
    {  
        printf("Unbalanced parenthesis");  
    }  
    return 0;  
}  