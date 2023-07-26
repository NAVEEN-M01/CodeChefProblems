/*
              Squats
Problem
Somu went to the gym today. He decided to do X sets of squats. Each set consists of 15 squats. Determine the total number of squats that he did today.

*/

#include <stdio.h>

int main(void) {
	// your code goes here
	int i,t,n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&n);
	    printf("%d",n*15);
	    printf("\n");
	}
	return 0;
}

