#include <stdio.h>

int main() {
    int N,cnt=0;
    scanf("%d",&N);

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(i%2==0) {
                cnt++;
                printf("%d ",cnt);
            } else {
                cnt+=2;
                printf("%d ",cnt);
            }
        }
        puts("");
    }
    return 0;
}