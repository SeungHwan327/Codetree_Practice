#include <stdio.h>

int main() {
    int N,cnt=1;
    scanf("%d",&N);

    for(int i=0; i<N; i++) {
        for(int j=0; j<i; j++) {
            printf("  ");
        }
        for(int j=N-i; j>0; j--) {
            printf("%d ",cnt);
            cnt++;
            if(cnt==10) {
                cnt=1;
            }
        }
        puts("");
    }
    return 0;
}