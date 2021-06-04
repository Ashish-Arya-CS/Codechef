#include <stdio.h>
int main()
{
    long int n,k,t;
    int i,count=0;
    scanf("%ld %ld", &n,&k);
    for(i=0; i<n; i++)
    {
        scanf("%ld", &t);
        if(t%k == 0)
        count ++;
    }
    printf("%d \n",count);
    return 0;
}