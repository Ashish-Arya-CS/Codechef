#include <stdio.h>

int main() {
	int t;
    scanf("%d", &t);
    while(t--){
        char ch;
        scanf(" %c",&ch);
        if(ch == 'b' || ch == 'B')
            printf("BattleShip\n");
        else if(ch == 'c' || ch == 'C')
            printf("Cruiser\n");
        else if(ch == 'd' || ch == 'D')
            printf("Destroyer\n");
        else if(ch == 'f' || ch == 'F')
            printf("Frigate\n");
    }
	return 0;
}

