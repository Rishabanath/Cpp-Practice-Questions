/*6.Write a C program to which reads n digits chosen from 0 to 9 and counts the number of combinations where the sum of the digits equals to given number. Do not use the same digits in a combination.

For example, the combinations where n = 2 and s = 5 are as follows:

0 + 5 = 5

1 + 4 = 5

3 + 2 = 5*/
#include <stdio.h>
int combo(int n, int s, int a)
{
	int i,result = 0;
	if (n == 1)
	{
		if (s >= a && s <= 9)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	for (i = a; i <= 9; i++)
	{
		result += combo(n - 1, s - i, i + 1);
	}
	return result;
}

int main()
{
	int  n,s;
        printf("Input number of combinations:\n");
		scanf("%d", &n);
		printf("\nSum of the digits:\n");
		scanf("%d", &s);
		if (n != 0 && s != 0)
		{
			printf("Number of combinations: %d\n",combo(n,s,0));
		}
		
	return 0;
}
