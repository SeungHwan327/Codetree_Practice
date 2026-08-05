#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    for(int i=0; i<N; i++) {
        for(int j=N-i; j>0; j--) {
            for(int k=N-i; k>0; k--) {
                printf("*");
            }
            printf(" ");
        }
        puts("");
    }
    return 0;
}