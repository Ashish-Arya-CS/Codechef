#include <stdio.h>

int main() {
	int t;
	long int D,d,p,q;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%ld %ld %ld %ld", &D, &d, &p, &q);
	    long sum = 0;
	    long nd = D/d;
	    sum = nd*p*d + (q*(nd*(nd-1))/2)*d +(D%d)*(p+nd*q);
	    printf("%ld \n", sum);
	}
	return 0;
}

