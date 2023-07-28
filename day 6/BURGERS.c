/*              Burgers

    Chef is fond of burgers and decided to make as many burgers as possible.

Chef has A patties and B buns. To make 1 burger, Chef needs 1 patty and 1 bun.Find the maximum number of burgers that Chef can make.

*/
#include <stdio.h>

int main(void) {
    int t,i,x,y;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	   scanf("%d%d",&x,&y); 
	   (x<y)?printf("x\n"):printf("y\n");
	}
	return 0;
}

