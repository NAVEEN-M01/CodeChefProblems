/*             Donation Drive
    A blood drive aims to collect N number of blood donations.
The drive has collected X donations so far. Find the remaining number of donations needed to reach the target.

*/
#include<stdio.h>

int main()
{
    int t,i,n,x;
    //no of testcases
    scanf("%d", &t); 
    
    for(i=0;i<t;i++)
    {
        scanf("%d", &n);
        scanf("%d", &x);   
        printf("%d\n",n-x);
    
    }
    return 0;
}
