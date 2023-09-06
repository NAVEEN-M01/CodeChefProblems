        //                 Janmansh and Games

        // Janmansh and Jay are playing a game. They start with a number X and they play a total of Y moves. Janmansh plays the first move of the game, after which both the players make moves alternatingly.

#include <stdio.h>

int main(void) {
	int t,x,y,z,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d",&x,&y);
	    z=x+y;
	    if((z%2)==0)
	        printf("Janmansh\n");
	    else
	        printf("Jay\n");
	    
	    
	}
	return 0;
}

