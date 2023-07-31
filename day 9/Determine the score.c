/*                Determine the Score

    Chef appeared for a placement test.

There is a problem worth X points. Chef finds out that the problem has exactly 1010 test cases. It is known that each test case is worth the same number of points.

Chef passes N test cases among them. Determine the score Chef will get.

*/
#include<stdio.h>

int main()
{
    int i,t,x,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        scanf("%d",&x);
        int y=n/10;
        printf("%d\n",y*x);
        
    }
    return 0;
}
