#include <stdio.h>

int main() {
    int N,cnt=0;
    scanf("%d",&N);

    while(N>=1) {
        for(int i=1; i<100; i++) {
            N/=i;
            cnt++;
            if(N<=1) break;
        }
        if(N<=1) break;
    }

    printf("%d",cnt);

    return 0;
}