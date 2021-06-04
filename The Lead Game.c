#include <stdio.h>

int main() {
	int t,a,b;
	int arr[2] = {0,0};
	int sum1 = 0, sum2 = 0;
	scanf("%d", &t);
	while(t--)
	{
	    scanf("%d %d", &a, &b);
	    sum1 += a;
	    sum2 += b;
	    if((sum1-sum2)>0)
	    {
	        if((sum1-sum2) > arr[0])
	            arr[0] = (sum1-sum2);
	    }
	    else
	    {
	        if((sum2-sum1) > arr[1])
	            arr[1] = (sum2-sum1);
	    }
	}
	if(arr[0]>arr[1])
	    printf("1 %d", arr[0]);
	else
	    printf("2 %d", arr[1]);
	return 0;
}

