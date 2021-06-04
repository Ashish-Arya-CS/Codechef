#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    long int n;
    while(t--)
    {
        scanf("%ld", n);
        long int sum = 0;
        while(n>0)
        {
            sum += (n%10);
            n = n/10;
            printf("%ld \n", sum);
        }
    }

    return 0;
}