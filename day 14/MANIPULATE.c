/*                    Ezio and Guards

    Ezio can manipulate at most X number of guards with the apple of eden.

Given that there are Y number of guards, predict if he can safely manipulate all of them.
*/
#include <stdio.h>

int main(void) {
	int a,b,t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d%d",&a,&b);
	    (a>=b)?printf("yes\n"):printf("no\n");
	}
	return 0;
}

