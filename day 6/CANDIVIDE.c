/*          Candy Division
    There are three friends and a total of N candies.
There will be a fight amongst the friends if all of them do not get the same number of candies.

Chef wants to divide all the candies such that there is no fight. Find whether such distribution is possible.
*/
#include <stdio.h>

int main(void) {
    int t,i,n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&n);
	    (n%3==0)?printf("yes\n"):printf("no\n");
	}
	return 0;
}

