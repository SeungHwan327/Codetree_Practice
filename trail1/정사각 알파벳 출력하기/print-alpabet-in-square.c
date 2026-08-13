#include <stdio.h>

int main() {
    int N,cnt=65;
    scanf("%d",&N);

    for(int i=0; i<N; i++) {
        for(int j=1; j<=N; j++) {
            printf("%c",cnt);
            cnt++;
        }
        puts("");
    }
    return 0;
}