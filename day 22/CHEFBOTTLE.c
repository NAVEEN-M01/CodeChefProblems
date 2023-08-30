//                 Chef and Water Bottles
//         Chef has N empty bottles where each bottle has a capacity of X litres.
// There is a water tank in Chefland having K litres of water. Chef wants to fill the empty bottles using the water in the tank.
// Assuming that Chef does not spill any water while filling the bottles, find out the maximum number of bottles Chef can fill completely.

#include <stdio.h>

int main(void) {
	int n,x,k,t;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d%d%d",&n,&x,&k);
	    int s=k/x;
	    if(s<=n)
	 	    printf("%d\n",s);
	 	else
	 	    printf("%d\n",n);
	}
	return 0;
}

