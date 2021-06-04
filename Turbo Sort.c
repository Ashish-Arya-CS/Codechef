#include<stdio.h>
void quicksort(int a[], int l, int h)
{
    int i = l, j = h;
    int pivot = a[(l + h) / 2];
 
      while (i <= j) {
            while (a[i] < pivot)
                  i++;
            while (a[j] > pivot)
                  j--;
            if (i <= j) {
                  int tmp = a[i];
                  a[i] = a[j];
                  a[j] = tmp;
                  i++;
                  j--;
            }
      }
 
      if (l < j)
            quicksort(a, l, j);
      if (i < h)
            quicksort(a, i, h);
}
int main()
{
int t;
int i,j,temp;
scanf("%d",&t);
int a[t+1];
for(i=0;i<t;i++)
{
scanf("%d",&a[i]);
}
a[t] = 1000001;
quicksort(a, 0, t);
for(i=0;i<t;i++)
{
printf("%d \n",a[i]);
}
return 0;
}