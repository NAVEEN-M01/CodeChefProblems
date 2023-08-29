// Elections in Chefland

// Election season has started in Chefland and the election commission wants to know the count of eligible voters.
// There are N people in Chefland where the age of the i th person in A .
// Given that a person needs to be at least X years old to vote, find the number of eligible voters.

#include <stdio.h>

int main(void) {
    int t,n,j,a[100],i,x;
	scanf("%d",&t);
	while(t--)
	{
	     int j=0;
	    scanf("%d%d",&n,&x);
	    
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    } 
	    for(i=0;i<n;i++)
	    {
	       
	        if(a[i]>=x)
	            j++;
    	}
        	printf("%d\n",j);
	}
    
	
	
	return 0;
}

