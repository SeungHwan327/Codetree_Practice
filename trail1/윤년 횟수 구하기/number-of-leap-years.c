#include <stdio.h>

int main() {
    int N, cnt=0;
    scanf("%d",&N);

    for(int i=1; i<=N; i++) {
        if(i%4==0) {
            if(i%100==0 && i%400!=0) {
                continue;
            } else cnt++;
        }
    }

    printf("%d",cnt);
    return 0;
}