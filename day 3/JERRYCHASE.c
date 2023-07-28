/*                  Tom and Jerry Chase
In a classic chase, Tom is running after Jerry as Jerry has eaten Tom's favourite food.
Jerry is running at a speed of X metres per second while Tom is chasing him at a speed of Y metres per second. Determine whether Tom will be able to catch Jerry.
Note that initially Jerry is not at the same position as Tom.
*/
#include <stdio.h>
int main(void) {
	int t,i,x,y;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d",&x,&y);
	    (x<y)?printf("yes\n"):printf("no\n");
	}
	return 0;
}

