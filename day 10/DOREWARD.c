/*              Donation Rewards

    On the occasion of World Blood Donor Day, Chef has organized an event to reward regular blood donars in Chefland.

If the donor has made less than or equal to 3 donations, they receive a BRONZE donor badge.
If the donor has made more than 3 but less than equal to 6 donations, they receive a SILVER donor badge.
If the donor has made more than 6 donations, they receive a GOLD donor badge.
Given that a person has made X donations, find the badge they receive.

*/
#include <stdio.h>

int main(void) {
	int t,i,n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
    {
       scanf("%d",&n); 
       if(n<=3)
            printf("bronze\n");
        if((3<n)&&(n<=6))
            printf("silver\n");
        if(n>6)
            printf("gold\n");
    }
	return 0;
}

