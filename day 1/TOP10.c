/*
        Masterchef finals

Chef has been working hard to compete in MasterChef.
He is ranked X out of all contestants. However, only 10 contestants would be selected for the finals.
Check whether Chef made it to the top 10 or not?

*/
#include <stdio.h>

int main(void) 
{
    int i,t,x;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&x);
	    (x<=10)?printf("YES\n"):printf("NO\n");
     }
	    
	
	
	return 0;
}

