//                                 Reach on Time
// Chef has recently moved into an apartment. It takes 30 minutes for Chef to reach office from the apartment.

// Chef left for the office X minutes before Chef was supposed to reach. Determine whether or not Chef will be able to reach on time.

#include <stdio.h>

int main(void) {
	int t,i,x;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&x);
	    if(x>=30)
	        printf("yes\n");
	    else
	        printf("no\n");
	}
	return 0;
}

