/*                      Just One More Episode

Chef has to attend an exam that starts in X minutes, but of course, watching shows takes priority.
Every episode of the show that Chef is watching, is 24 minutes long.
If he starts watching a new episode now, will he finish watching it strictly before the exam starts?

*/
#include <stdio.h>

int main(void) {
    {
        int i,n,t;
        scanf("%d",&t);
        for(i=0;i<t;i++)
        {
            scanf("%d",&n);
            (n>24)?printf("yes\n"):printf("no\n");
        }
    }
	return 0;
}

