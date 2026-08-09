#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    for(int i=0; i<N; i++) {
        for(int j=0; j<i*2; j++) {
            printf(" ");
        }
        for(int j=(2*N)-1-(2*i); j>0; j--) {
            printf("* ");
        }
        puts("");
    }

    for(int i=0; i<N-1; i++) {
        for(int j=N-i-2; j>0; j--) {
            printf("  ");
        }
        for(int j=0; j<3+(2*i); j++) {
            printf("* ");
        }
        puts("");
    }
    return 0;
}