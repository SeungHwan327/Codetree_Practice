#include <stdio.h>

int main() {
    int N;
    int cnt;
    scanf("%d",&N);

    for(int i=1; i<=N; i++) {
        if(i%2==1) {
            cnt=1;
            for(int j=0; j<N; j++) {
                printf("%d",cnt);
                cnt++;
            }
        } else {
            cnt=N;
            for(int j=N; j>0; j--) {
                printf("%d",cnt);
                cnt--;
            }
        }
        puts("");
    }
    return 0;
}