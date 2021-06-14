#include <stdio.h>

int main() {
 
 int t;
 float s;
 scanf("%d",&t);
 while(t>0)
 {
     scanf("%f",&s);
     if(s<1500)
     printf("%.2f\n",s*2);
     else
     printf("%.2f\n",s*1.98+500);
     t--;
 }
 return 0;
}