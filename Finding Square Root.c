#include<stdio.h>
#include<math.h>
int main(){
    int t,n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        double num = (double) n;
        double sq = sqrt(num);
        int sq_new = (int) sq;
        printf("%d \n", sq_new);
    }
}