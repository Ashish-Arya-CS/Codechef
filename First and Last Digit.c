#include<stdio.h>
int main()
{
    int t;
    long int n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%ld", &n);
        int length = 0;
        int arr[1000000];
        while(n>0)
        {
            arr[length] = n%10;
            n=n/10;
            length++;
        }
        int sum = arr[0] + arr[length-1];
        printf("%d \n", sum);
    }
    return 0;
}