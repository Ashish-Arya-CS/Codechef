#include <stdio.h>

int main() {
	int t,n,total,num;
	scanf("%d", &t);
	while(t--)
	{
	    scanf("%d", &n);
	    total = 0;
	    num = 0;
	    int hundred = (n-num)/100;
	    total += hundred;
	    num = num + (hundred*100);
	    int fifty = (n-num)/50;
	    total += fifty;
	    num = num + (fifty*50);
	    int ten = (n-num)/10;
	    total += ten;
	    num = num + (ten*10);
	    int five = (n-num)/5;
	    total += five;
	    num = num + (five*5);
	    int two = (n-num)/2;
	    total += two;
	    num = num + (two*2);
	    int one = (n-num)/1;
	    total += one;
	    num = num + (one*1);
	    printf("%d \n", total);
	}
	return 0;
}

