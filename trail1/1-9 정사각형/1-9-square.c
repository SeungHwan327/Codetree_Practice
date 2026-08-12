#include <stdio.h>

int main() {
    int N,cnt=1;
    scanf("%d",&N);

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(cnt==10) {
                cnt=1;
            }
            printf("%d",cnt);
            cnt++;
        }
        puts("");
     }
    return 0;
}