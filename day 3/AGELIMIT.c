#include <stdio.h>

int main(void) {
	// your code goes here
	int i,x,y,t,a;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d%d",&x,&y,&a);
	    if((x<=a)&&(y>a))
	        printf("YES\n");
	    else
	         printf("NO\n");
	}
	return 0;
}

