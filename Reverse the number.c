#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        int new = 0;
        while(n != 0)
        {
            int d = n%10;
            n = n/10;
            new = new*10+d;
        }
        printf("%d \n", new);
    }
}