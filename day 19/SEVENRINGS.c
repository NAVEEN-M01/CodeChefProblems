//                             7 Rings
//   In Chefland, a valid phone number consists of 5 digits with no leading zeros.
// Chef went to a store and purchased N items, where the cost of each item is X.
// Find whether the total bill is equivalent to a valid phone number.                           

#include <stdio.h>

int main(void) {
	int t,i,n,x,z;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d",&n,&x);
	    z=n*x; 
	    if((z<=99999)&&(z>=10000))
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

