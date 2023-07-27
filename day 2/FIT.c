/*           Fitness

Chef wants to become fit for which he decided to walk to the office and return home by walking. It is known that Chef's office is X km away from his home.
If his office is open on 5 days in a week, find the number of kilometers Chef travels through office trips in a week.
*/
#include <stdio.h>

int main(void) {
    int x,i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&x);
        printf("%d\n",x*5*2);
        
    }
	return 0;
}

