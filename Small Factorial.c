#include<stdio.h>
int main()
{
    int t,n,i;
    scanf("%d", &t);
    int result, tmp;
    while(t--)
    {   
        int arr[10000];
        arr[0] = 1;
        int leng = 1;
        scanf("%d", &n);
        while(n>0){
            
            for(i=0;i<leng;i++)
        {
            result = arr[i] * n + tmp;
            arr[i] = result%10;
            tmp = result/10;
        }
        while(tmp>0)
        {
            arr[leng] = tmp%10;
            leng++;
            tmp = tmp/10;
        }
        n--;
        }
        for(i=leng-1;i>=0;i--)
        {
            printf("%d",arr[i]);
        }
        printf("\n");
    }
    return 0;
}