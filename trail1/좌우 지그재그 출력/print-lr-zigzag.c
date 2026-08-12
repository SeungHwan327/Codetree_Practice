#include <stdio.h>

int main() {
    int N,cnt=1;
    scanf("%d",&N);

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(i%2==0) {
                printf("%d ",cnt);
                cnt++;
            } else {
                printf("%d ",N+cnt-j-1);
            }
        }
        if(i%2==1) {
            cnt+=N;
        }
        puts("");
    }
    return 0;
}