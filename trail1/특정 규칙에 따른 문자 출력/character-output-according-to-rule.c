#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    for(int i=0; i<N; i++) {
        for(int j=N-i-1; j>0; j--) {
            printf("  ");
        }
        for(int j=0; j<=i; j++) {
            printf("@ ");
        }
        puts("");
    }

    for(int i=0; i<N-1; i++) {
        for(int j=N-i-1; j>0; j--) {
            printf("@ ");
        }
        puts("");
    }
    return 0;
}
