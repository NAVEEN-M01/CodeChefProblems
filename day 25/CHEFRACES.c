        //                     Chef and Races
        // The National Championships are starting soon. There are 4 race categories, numbered from 1 to 4, that Chef is interested in. Chef is participating in exactly 2 of these categories.
#include <stdio.h>

int main(void) {
    int t,x,y,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d",&x,&y,&a,&b);
        if(((x==a)&&(y==b))||((x==b)&&(y==a)))
            printf("0\n");
        else if(((x==a)||(y==b))||((x==b)||(y==a)))
            printf("1\n");
        else
            printf("2\n");
    }
	return 0;
}

