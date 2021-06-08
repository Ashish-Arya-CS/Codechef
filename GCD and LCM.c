#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
    long n1,n2,i,gcd=0,lcm=0;
    scanf("%ld %ld",&n1,&n2);
    for(i=1;i<=n1;i++)
    {
        if(n1%i==0&&n2%i==0)
            gcd=i;
    }
    lcm=(n1*n2)/gcd;
    printf("%d %d\n",gcd,lcm);
    }
	return 0;
}

