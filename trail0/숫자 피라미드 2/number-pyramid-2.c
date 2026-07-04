#include <stdio.h>

int main() {
    int N;
    int cnt=1;
    scanf("%d",&N);

    for(int i=0; i<N; i++) {
        for(int j=0; j<=i; j++) {
            printf("%d ",cnt);
            cnt++;
        }
        puts("");
    }

    return 0;
}