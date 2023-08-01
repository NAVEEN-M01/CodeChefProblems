/*                       The Cheaper Cab
    Chef has to travel to another place. For this, he can avail any one of two cab services.
The first cab service charges X rupees.
The second cab service charges Y rupees.
Chef wants to spend the minimum amount of money. Which cab service should Chef take?
*/
#include <stdio.h>

int main(void) {
	int i,t,x,y;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d",&x,&y);
	    if(x==y)
            printf("any\n");
        if(x<y)
            printf("first\n");
        if(x>y) 
            printf("second\n");
	}
	return 0;
}

