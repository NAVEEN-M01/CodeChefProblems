/*                      Volume Control
    Chef is watching TV. The current volume of the TV is X. Pressing the volume up button of the TV remote increases the volume by 1 while pressing the volume down button decreases the volume by 1. Chef wants to change the volume from X to Y. Find the minimum number of button presses required to do so.

*/
#include <stdio.h>

int main(void) {
	int i,t,x,y;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d",&x,&y);
	    if(x>y)
	        printf("%d\n",x-y);
	    else      
	        printf("%d\n",y-x);
	    
	}
	return 0;
}

