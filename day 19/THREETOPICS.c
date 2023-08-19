//                                 The Three Topics

// The Chef has reached the finals of the Annual Inter-school Declamation contest.

// For the finals, students were asked to prepare 10 topics. However, Chef was only able to prepare three topics, numbered A, B and C — he is totally blank about the other topics. This means Chef can only win the contest if he gets the topics A, B or C to speak about.
// On the contest day, Chef gets topic X. Determine whether Chef has any chances of winning the competition.


#include <stdio.h>

int main(void) {
    int a,b,c,x;
	scanf("%d%d%d%d",&a,&b,&c,&x);
	if((x==a)||(x==b)||(x==c))
	    printf("Yes");
	else
	    printf("no");
	    
	   
	
	
	return 0;
}

