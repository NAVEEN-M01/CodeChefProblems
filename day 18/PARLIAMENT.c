/*                        Parliament
    An important resolution is being discussed in the Parliament of Chefland. There are N members present in the Parliament out of which X members voted in favour of the resolution and the remaining voted against it.

According to the constitution of Chefland, a resolution is passed if and only if half or more than half the members present in the Parliament vote in favour of the resolution.

Determine if the resolution is passed or not.
*/

#include <stdio.h>

int main(void) {
    
    int i,t,x,n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d",&n,&x);
	    ((n/2)<=x)?printf("yes\n"):printf("no\n");
	}
	return 0;
}

