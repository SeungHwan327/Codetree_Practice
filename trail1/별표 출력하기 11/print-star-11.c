#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    for(int i=0; i<2*N+1; i++) {
        if(i%2==0) {
            for(int j=0; j<2*N+1; j++) {
                printf("* ");
            }
        } else {
            for(int j=0; j<2*N+1; j++) {
                if(j%2==0) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        }
        puts("");
    }
    return 0;
}