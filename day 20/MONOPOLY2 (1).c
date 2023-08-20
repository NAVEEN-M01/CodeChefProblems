//                                     Monopoly
//     There is said to be a monopoly in the market if the profit made by one company is strictly greater than the sum of profits made by all other companies.
// Determine if there is a monopoly in the market or not

#include <stdio.h>

int main(void) {
	int t,p,q,r,s,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d%d%d",&p,&q,&r,&s);
	    if((p>q+r+s)||(s>q+r+p)||(q>p+r+s)||(r>q+p+s))
	        printf("yes\n");
	    else
	        printf("no\n");
	  
	}
	return 0;
}

