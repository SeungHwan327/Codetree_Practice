#include <stdio.h>

int main() {
    int n,cnt=0;
    scanf("%d",&n);

    for(int i=0; i<10; i++) {
        n/=2;
        cnt++;
        if(n==1) break;
    }
    printf("%d",cnt);

    return 0;
}