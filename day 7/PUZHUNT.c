/*                      Puzzle Hunt

Chef and some of his friends are planning to participate in a puzzle hunt event.
The rules of the puzzle hunt state:
"This hunt is intended for teams of6 to 8 people."
Chef's team has N people in total. Are they eligible to participate?
*/

#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	if((n>=6)&&(n<=8))
	    printf("yes\n");
	else
	    printf("no\n");
	return 0;
}

