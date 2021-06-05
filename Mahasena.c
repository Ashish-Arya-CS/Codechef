#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	int arr[t];
	int even=0,odd=0;
	for(int i=0;i<t;i++)
	{
	    scanf("%d", &arr[i]);
	    if((arr[i]%2)==0)
	        even++;
	    else
	        odd++;
	}   
	if(even>odd)
	    printf("READY FOR BATTLE");
	else
	    printf("NOT READY");
	return 0;
}

