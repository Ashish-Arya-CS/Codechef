#include <stdio.h>

int main() {
	int t,a,b;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &a, &b);
        if(a>b)
            printf("%d %d\n", a,(a+b));
        else
            printf("%d %d\n", b, (a+b));
    }
	return 0;
}

