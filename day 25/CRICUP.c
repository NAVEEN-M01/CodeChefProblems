//                                 Cup Finals
//     It is the World Cup Finals. Chef only finds a match interesting if the skill difference of the competing teams is less than or equal to D.
// Given that the skills of the teams competing in the final are X and Y respectively, determine whether Chef will find the game interesting or not.


#include <stdio.h>

int main(void) {
	int i,t,x,y,d,z;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d%d",&x,&y,&d);
	    z=abs(x-y);
	    if (z<0)
	        printf("no\n");
	    else if (z<=d)
	        printf("yes\n");
	    else
	        printf("no\n");
	    
	    
	    
	    }
	return 0;
}

