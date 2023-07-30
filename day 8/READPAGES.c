/*
                        Read Pages

Chef has started studying for the upcoming test. The textbook has N pages in total. Chef wants to read at most X pages a day for Y days.

Find out whether it is possible for Chef to complete the whole book.

*/
#include <stdio.h>

int main(void) {
    int i,x,y,n,t,z;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&n,&x,&y);
        z=x*y;
        (z>=n)?printf("yes\n"):printf("no\n");
    }
	return 0 ;
}

