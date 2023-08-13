/*                            Can Chef
    Chef owns a car that can run 15 kilometers using 1 liter of petrol.
He wants to attend a programming camp at DAIICT.X liters of petrol is present in Chef's car. The distance between his house and DAIICT is Y kilometers.
Determine whether Chef can attend the event and return to his home with the given amount of petrol.
*/
#include <stdio.h>

int main(void) {
    int t,a,b;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d%d",&a,&b);
	    if((a*15)>=(2*b))
	        printf("yes\n");
	    else
	        printf("no\n");
	}
	return 0;
}

