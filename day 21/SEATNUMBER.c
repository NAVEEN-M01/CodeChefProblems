//             Bus Seat Numbering
// There is a bus with 30 seats. The seats are numbered from 1 to 30, and the numbering is as depicted in this image.

#include <stdio.h>

int main(void) {
	int t,n;
	scanf("%d",&t);
	int i=0;
	while(i<t)
	{
	   scanf("%d",&n); 
	   if((n>0)&&(n<=10))
	        printf("Lower Double\n");
	   if((n>=11)&&(n<=15))
	        printf("Lower Single\n");
	   if((n>=16)&&(n<=25) ) 
	        printf("Upper Double\n"); 
	   if((n>=26)&&(n<=30))
	         printf("Upper Single\n"); 
	   t--;
	}
	return 0;
}

