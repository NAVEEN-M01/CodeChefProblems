/*                  Course Registration
There is a group of N friends who wish to enroll in a course together. The course has a maximum capacity of M students that can register for it. If there are K other students who have already enrolled in the course, determine if it will still be possible for all theN friends to do so or not.
*/
#include <stdio.h>

int main(void) {
	int i,t,n,m,k;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d%d",&n,&m,&k);
	    int x=n+k;
	    (x<=m)?printf("yes\n"):printf("no\n");
	}
	return 0;
}

