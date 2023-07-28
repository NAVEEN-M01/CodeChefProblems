/*               Right There

Chef wants to host a party with a total of N people.
However, the party hall has a capacity of X people. Find whether Chef can host the party.

*/

#include <stdio.h>
int main(void) {
	int i,t,x,y;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d",&x,&y);
	    (x<=y)?printf("yes\n"):printf("no\n");
	}
	return 0;
}

