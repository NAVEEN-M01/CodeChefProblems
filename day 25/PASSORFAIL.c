        //                 Pass or Fail
        // Chef is struggling to pass a certain college course.


#include <stdio.h>

int main(void) {
	int t,n,x,p;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d%d%d",&n,&x,&p);
	    int res=(x*3)-(n-x);
	    (res>=p)?printf("PASS\n"):printf("fail\n");
	}
	return 0;
}

