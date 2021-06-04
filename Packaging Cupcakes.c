#include <stdio.h>

int main() {
	int t;
    long int n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%ld", &n);
        long int result = (long int) n/2;
        result += 1;
        printf("%ld \n", result);
    }
	return 0;
}

