/*                  Reach Home
Chef is hungry and wants to reach home.
Chef can travel up to 5 kilometres on 1 litre of fuel on his motorcycle.
Currently, his motorcycle is filled with X litres of fuel and his home is Y kilometres away.
Determine whether Chef can reach his home on his motorcycle or not.
*/
#include <stdio.h>

int main(void) {
	int t,i,x,y;
	scanf("%d",&t);
	for(i=0;i<t;i++)
    {
       scanf("%d%d",&x,&y);
       ((x*5)>=y)?printf("yes\n"):printf("no\n");
       
       
       
    }  
	return 0;
}

