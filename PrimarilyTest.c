#include <stdio.h>

int main() {
	int t,n,f;
	scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        f = 0;
        for(int i=1; i<=n; i++){
            if((n%i) == 0)
                f++;
        }
        if(f==2)
            printf("yes\n");
        else
            printf("no\n");
    }
	return 0;
}

