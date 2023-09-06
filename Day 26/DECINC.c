    //                     Decrement OR Increment
    // Write a program to obtain a number N and increment its value by 1 if the number is divisible by 4 ℎ otherwise decrement its value by 1.

#include <stdio.h>

int main(void) {
	int x;
	scanf("%d",&x);
	if((x%4)==0)
	    printf("%d",x+1);
	else   
	    printf("%d",x-1);
	
	return 0;
}

