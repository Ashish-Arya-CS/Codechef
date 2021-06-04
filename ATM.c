#include <stdio.h>

int main()
{
    int n1;
    float n2; 
    scanf("%d %f", &n1,&n2);
    //scanf("%f", &n2);
    if((n2-(n1+0.50))<0){
    printf("%.2f", n2);
    }
    else{
        if((n1%5) != 0)
        printf("%.2f", n2);
        else{
            float diff = n2 - n1;
            diff -= 0.50;
            printf("%.2f", diff);
        }

    }
    return 0;
}