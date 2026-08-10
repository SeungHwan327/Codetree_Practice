#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    for(int i=1; i<=N; i++) {
        if(i%2!=0) {
            printf("* ");
            puts("");
            continue;
        } else {
            for(int j=0; j<i; j++) {
                printf("* ");
            }
        }
        puts("");
    }
    return 0;
}