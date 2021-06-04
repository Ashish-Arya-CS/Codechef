#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    long int a[t];
    for(i=0;i<t;i++)
        scanf("%ld",&a[i]);
    for(i=0;i<t;i++)
    {
        long int count = 0;
        long int n = a[i];
        while(n>0)
        {
            int d = n%10;
            n = n/10;
            if(d==4)
                count++;
        }
        printf("%ld \n", count);
    }
}