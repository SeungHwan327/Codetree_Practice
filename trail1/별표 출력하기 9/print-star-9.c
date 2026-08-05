#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    for(int i=1; i<=N; i++) {
        for(int j=(N*2)-(2*i); j>0; j--) {
            printf(" ");
        }
        for(int k=(2*i)-1; k>0; k--) {
            printf("* ");
        }
        puts("");
    }
    return 0;
}