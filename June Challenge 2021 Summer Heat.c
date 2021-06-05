#include <stdio.h>
#include<math.h>
int main() {
	int t,xa,xb,Xa,Xb;
	scanf("%d", &t);
	while(t--)
	{
	    scanf("%d %d %d %d", &xa, &xb, &Xa, &Xb);
	    int a = (Xa/xa);
	 
	    int b = (Xb/xb);
	    
	    printf("%d \n", (a+b));
	}
	return 0;
}

