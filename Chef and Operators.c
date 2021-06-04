#include <stdio.h>

int main() 
{
	int t;
	long int num1,num2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%ld %ld",&num1,&num2);
		if (num1<num2)
	  		printf("<\n");
	   	else if(num2<num1)
	  		printf(">\n");
	 	else
	  		printf("=\n");
	} 
	return 0;
}