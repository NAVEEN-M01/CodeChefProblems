/*              Add Two Numbers


Your task is very simple: given two integers A and B, write a program to add these two numbers and output the sum.

*/
#include <stdio.h> 

int main()
{

	int T,a,b;
	scanf("%d", &T);
	while (T--) 
	{
		scanf("%d %d", &a, &b);
		printf("%d\n",  a + b);
	}

	return 0;
}