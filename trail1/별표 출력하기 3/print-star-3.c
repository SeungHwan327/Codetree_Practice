#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    for(int i=0; i<N; i++) {
        
        for(int j=((N-i)*2)-1; j>0; j--) {
            printf("* ");
        }
        puts("");
        for(int k=0; k<(2*i)+2; k++) {
            printf(" ");
        }

    }

    return 0;
}