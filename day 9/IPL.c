/*                IPL Ticket Rush

    DAIICT college students want to attend an IPL match.

A total of N students from the college want to go while only M tickets are available for the match.

Determine how many students won't be able to book tickets.


*/
#include<stdio.h>

int main()
{
    int t,i,n,x;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d", &n);
        scanf("%d", &x);
        (n<x)?printf("0"):printf("%d",n-x);  
    }
    return 0;
}