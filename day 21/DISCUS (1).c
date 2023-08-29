

//                  Discus Throw
// In discus throw, a player is given 3 throws and the throw with the longest distance is regarded as their final score.

// You are given the distances for all 3 throws of a player. Determine the final score of the player.

#include <stdio.h>

int main(void) {
    int a,i,b,c,t;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{   
	    scanf("%d%d%d",&a,&b,&c);
	    if((a>b)&&(a>c))
	        printf("%d\n",a);
	    if((b>a)&&(b>c))
	        printf("%d\n",b);
	    if((c>b)&&(c>a))
	        printf("%d\n",c);
	   
	}
	return 0;
}