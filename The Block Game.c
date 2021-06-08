#include <stdio.h>

int main() {
    int t,n,num,temp;
    scanf("%d", &t);
	while(t--){
	    scanf("%d", &n);
	    num = 0;
	    temp = n;
	    while(temp>0){
	        int d = temp%10;
	        temp = temp/10;
	        num = num*10+d;
	    }
	    if(num == n)
	        printf("wins \n");
	    else
	        printf("loses \n");
	}
	return 0;
}

