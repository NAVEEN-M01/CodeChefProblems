/* Important Pages on CodeChef
        MoEngage noticed that some users are not aware of the practice page on CodeChef, and some others are not aware of the rated contests on CodeChef. So, MoEngage wants to send an email to the users depending on which of the following groups they fall into:
*/
#include <stdio.h>
int main(void) {
    int x,y;
    scanf("%d%d",&x,&y);
    if((x==0)&&(y==1 || y==0))
        printf("https://www.codechef.com/practice");
    if((x==1)&&(y==0))
        printf("https://www.codechef.com/contests");
    if ((x==1)&&(y==1))
        printf("https://discuss.codechef.com");
    
	return 0;
}

