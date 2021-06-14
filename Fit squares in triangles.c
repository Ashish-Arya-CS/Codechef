#include <stdio.h>

int main() {
	int t,b;
	scanf("%d", &t);
	while(t--)
	{
	    scanf("%d", &b);
	    int m = b/2;
	    int ans = (m*(m-1))/2;
	    printf("%d \n",ans);
	}
	return 0;
}

