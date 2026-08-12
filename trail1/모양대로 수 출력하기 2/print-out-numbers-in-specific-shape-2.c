#include <stdio.h>

int main() {
    int N,cnt=2;
    scanf("%d",&N);

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(cnt==10) {
                cnt=2;
            }
            printf("%d ",cnt);
            cnt+=2;
        }
        puts("");
    }
    return 0;
}