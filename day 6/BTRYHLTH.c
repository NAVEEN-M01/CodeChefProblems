/*                      Battery Health

Apple considers any iPhone with a battery health of 80% or above, to be in optimal condition.
Given that your iPhone has X% battery health, find whether it is in optimal condition.

*/

#include <stdio.h>
int main(void) {
	int i=0,t,x;
	scanf("%d",&t);
    while(i<t)
	{
	  scanf("%d",&x);
	  (x>=80)?printf("yes\n"):printf("no\n");
	  t--;
	}
	return 0;
}

