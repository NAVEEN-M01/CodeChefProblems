//                     The Last Levels 
                    
//     Chef is playing a videogame, and is getting close to the end. He decides to finish the rest of the game in a single session.
// There are X levels remaining in the game, and each level takes Chef Y minutes to complete. To protect against eye strain, Chef also decides that every time he completes 
// 3 levels, he will take a Z minute break from playing. Note that there is no need to take this break if the game has been completed.
// How much time (in minutes) will it take Chef to complete the game?
    
#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int X,Y,Z;
	    scanf("%d %d %d",&X,&Y,&Z);
	    if(X%3!=0)
	    printf("%d\n",X*Y+(X/3)*Z);
	    else
	    printf("%d\n",X*Y+(X/3-1)*Z);
	}
	return 0;
}



