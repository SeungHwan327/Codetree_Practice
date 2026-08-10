#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    for(int i=0; i<2*N; i++) {
        if(i%2==0) {
            for(int j=N-(i/2); j>0; j--) {
                printf("* ");
            }
        } else {
            for(int j=0; j<(i+1)/2; j++) {
                printf("* ");
            }
        }
        puts("");
    }
    return 0;
}