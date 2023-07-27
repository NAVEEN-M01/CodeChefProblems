/*              Chef Plays Ludo

Chef is playing Ludo. According to the rules of Ludo, a player can enter a new token into the play only when he rolls a 6 on the die.

In the current turn, Chef rolled the number X on the die. Determine if Chef can enter a new token into the play in the current turn or not.

*/
#include <stdio.h>

int main(void) {
	int i,t,x;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	   scanf("%d",&x); 
	   (x==6)?printf("\nYES"):printf("\nNO");
	   
	}
	return 0;
}

