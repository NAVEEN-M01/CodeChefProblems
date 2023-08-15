/*                            Battery Low
                            
    Chef's phone shows a Battery Low notification if the battery level is 15% or less.

Given that the battery level of Chef's phone is X%, determine whether it would show a Battery low notification.                        
*/
#include <stdio.h>

int main(void) {
	int x,t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d",&x);
	    (x<=15)?printf("yes\n"):printf("no\n");
	}
	return 0;
}

