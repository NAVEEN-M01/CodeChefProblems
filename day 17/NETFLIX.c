 /*                               Netflix
    Alice, Bob, and Charlie are contributing to buy a Netflix subscription. However, Netfix allows only two users to share a subscription.

Given that Alice, Bob, and Charlie have ,A,B, and C rupees respectively and a Netflix subscription costs X rupees, find whether any two of them can contribute to buy a subscription.

*/
#include <stdio.h>

int main(void) {
	int a,b,c,x,t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d%d%d",&a,&b,&c,&x);
	    if(((a+b)>=x)||((a+c)>=x)||((b+c)>=x))
	    {
	       printf("yes\n"); 
	    }
	    else
	    {
	        printf("no\n");
	    }
	}
	return 0;
}

