#include <stdio.h>

int main() {
	int t,n,p;
	scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        p=1;
        while(n>0)
        {
            p = p * n;
            n--;
        }
        printf("%d \n", p);
    }
	return 0;
}

