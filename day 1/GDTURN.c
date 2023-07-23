/*                      Good Turn
Chef and Chefina are playing with dice. In one turn, both of them roll their dice at once.
They consider a turn to be good if the sum of the numbers on their dice is greater than 6 Given that in a particular turn Chef and Chefina got X and Y on their respective dice, find whether the turn was good.
*/




#include <stdio.h>

int main(void) 
{
	int t,i,x,y;
	scanf("%d",&t);
    for(i=0;i<t;i++)
    {
	    scanf("%d%d",&x,&y);
        if(x+y>6)
            printf("YES\n");
        else
            printf("NO\n");
	}
	return 0;
}
