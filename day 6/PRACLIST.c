/*          How many unattempted problems

Our Chef is currently practicing on CodeChef and is a beginner. The count of ‘All Problems’ in the Beginner section is X. Our Chef has already ‘Attempted’ Y problems among them. How many problems are yet ‘Un-attempted’?


*/
#include <stdio.h>

int main(void) {
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d",x-y);
    
	return 0;
}

