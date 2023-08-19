        //                     Is the Score Consistent
        // Chef is watching a football match. The current score is A:B, that is, team 1 has scored A goals and team 2 has scored B goals. Chef wonders if it is possible for the score to become C:D at a later point in the game (i.e. team 1 has scored C goals and team 2 has scored D goals). Can you help Chef by answering his question?

#include <stdio.h>

int main(void) {
	int i,t,a,b,c,d;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d",&a,&b);
	    scanf("%d%d",&c,&d);
	    
	    if((a<=c)&&(b<=d))
	    {
	        printf("possible\n");
	    }
	    
	    if((a>c)||(b>d))
	    {
	        printf("IMPOSSIBLE\n");
	    }
	    
	    
	    
	    
	}
	return 0;
}

