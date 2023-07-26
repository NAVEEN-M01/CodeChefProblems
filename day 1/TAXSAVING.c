/*
                Saving Taxes

In Chefland, everyone who earns strictly more than Y rupees per year, has to pay a tax to Chef. Chef has allowed a special scheme where you can invest any amount of money and claim exemption for it.

You have earned X(X>Y) rupees this year. Find the minimum amount of money you have to invest so that you don't have to pay taxes this year.


*/

#include <stdio.h>

int main(void) {
    int i,t,x,y,z;
    scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d",&x,&y);
	    z=x-y;
	    printf("%d",z);
	    printf("\n");
	}
	return 0;
}

