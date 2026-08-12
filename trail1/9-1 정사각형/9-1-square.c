#include <stdio.h>

int main() {
    int N,cnt=9;
    scanf("%d",&N);

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            printf("%d",cnt);
            cnt--;
            if(cnt==0) {
                cnt=9;
            }
        }
        puts("");
    }

    return 0;
}