#include<stdio.h>
int main()
{
    int t,q,p;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &q, &p);
        if(q<=1000)
        {
            double total = q * p;
            printf("%.6lf\n", total);
        }
        else
        {
            double total = q * p;
            double deduction = 0.1 * total;
            total = total - deduction;
            printf("%.6lf\n", total);
        }
    }
    return 0;

}