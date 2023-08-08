/*                   Credit score
    To access CRED programs, one needs to have a credit score of 750 or more.
Given that the present credit score is X, determine if one can access CRED programs or not.
If it is possible to access CRED programs, output YES, otherwise output NO.
*/ 
#include <stdio.h>

int main(void) {
    int x;
    scanf("%d",&x);
    (x>=750)?printf("yes"):printf("no");
	return 0;
}

