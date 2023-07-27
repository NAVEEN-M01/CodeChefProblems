/*
            Biryani classes
            
    According to a recent survey, Biryani is the most ordered food. Chef wants to learn how to make world-class Biryani from a MasterChef. Chef will be required to attend the MasterChef's classes for X weeks, and the cost of classes per week is Y coins. What is the total amount of money that Chef will have to pay?        

*/
#include <stdio.h>

int main(void) {
	int i,x,t,y;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d",&x,&y);
	    int z=x*y;
	    printf("%d\n",z);
	}
	
	return 0;
}

