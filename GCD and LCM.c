#include <stdio.h>
int gcd(long int n1, long int n2) {
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}
int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
    long n1,n2,i,gcd1=0,lcm=0;
    scanf("%ld %ld",&n1,&n2);
    if(n1>=n2)
        gcd1 = gcd(n1, n2);
    else 
        gcd1 = gcd(n2, n1);
    lcm=(n1*n2)/gcd1;
    printf("%ld %ld\n",gcd1,lcm);
    }
	return 0;
}

