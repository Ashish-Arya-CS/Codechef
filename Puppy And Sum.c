#include <stdio.h>
int sume(n)
{
    int sum = 0;
    for(int i=1;i<=n;i++)
        sum += i;
    return sum;    
}
int main() {
	int t,d,n;
    scanf("%d", &t);
    while(t--)
    {
      scanf("%d %d", &d, &n);
      while(d--)
      {
          n = sume(n);
      }  
      printf("%d\n", n);
    }
	return 0;
}

