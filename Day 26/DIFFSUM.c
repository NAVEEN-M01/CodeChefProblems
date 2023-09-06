        //                     Sum OR Difference

        // Write a program to take two numbers as input and print their difference if the first number is greater than the second number ℎ otherwise print their sum.

#include <stdio.h>

int main(void) {
	int n1,n2;
	scanf("%d",&n1);
	scanf("%d",&n2);
	if(n1>n2)
	    printf("%d",n1-n2);
	else
	    printf("%d",n1+n2);
	return 0;
}

