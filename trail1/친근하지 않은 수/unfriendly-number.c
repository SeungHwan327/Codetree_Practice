#include <stdio.h>

int main() {
    int N,cnt=0;
    scanf("%d",&N);

    for(int i=1; i<=N; i++) {
        if(i%2==0 || i%3==0 || i%5==0) continue;
        else cnt++;
    }

    printf("%d",cnt);
    return 0;
}