/*1.The program adds, subtracts, multiplies, and divides simple integers. When the program is running, it zeros the result register and displays its contents. The user can then type in an operator and number. The result are updated and displayed. The following operators are valid:

Operator  Meaning
+   Addition
-          Subtraction
*                Multiplication
/                Division
Example (user input is in boldface)
calc
Result: 0
Enter operator and number: + 123
Result: 123
Enter operator and number: - 23
Result: 100
Enter operator and number: / 25
Result: 4
Enter operator and number: * 4
Result: 16
*/
#include <stdio.h>

int main() {
    // Write C code here
    int number;
    register int Result;
    Result=0;
    
    while(1)
    {
    printf("\nResult: %d\n",Result);
    printf("Enter operator and number: ");
    char op;
    scanf("%c",&op);
    getchar();
    scanf("%d",&number);
    getchar();
    if(op=='+')
    Result=Result+number;
    else if(op=='-')
    Result=Result-number;
    else if(op=='*')
    Result=Result*number;
    else if(op=='/')
    Result=Result/number;
    else
    {
        printf("Invalid operator %c",op);
        break;
    }
    }
    
    
    return 0;

}