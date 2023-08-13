/*            Favourite Numbers
    Alice likes numbers which are even, and are a multiple of 7.
Bob likes numbers which are odd, and are a multiple of 9.
Alice, Bob, and Charlie find a number A.
*/
#include <stdio.h>

int main(void) {
	int t,a;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	   scanf("%d",&a);
	   if(((a%2)==0)&&((a%7)==0))
	    printf("alice\n");
	   else if(((a%2)==1)&&((a%9)==0))
	    printf("bob\n");
	   else 
	    printf("charlie\n");
	   
	}
	return 0;
}

