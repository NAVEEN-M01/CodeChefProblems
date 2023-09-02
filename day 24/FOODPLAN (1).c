//                             Online or Offline
//     Chef is confused whether to go out and eat at the restaurant or order food online.
// The online order costs N rupees while the cost of eating at the restaurant is M rupees.
// However, Chef has a discount coupon with which he can avail flat 10% off on his online order.
// Find the cheaper option for Chef to eat, i.e., whether to order food online or eat at the restaurant.

#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,n,m;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d",&n,&m);
	    float x=n*0.10;
	    if((n-x)<m)
	        printf("ONLINE\n");
	    else if((n-x)==m)
	        printf("EITHER\n ");
	    else
	        printf("DINING\n");
	    
	}
	return 0;
}

