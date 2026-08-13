#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    for(int i=0; i<N; i++) {
        for(int j=i; j>=0; j--) {
            printf("%d ",N-j);
        }
        puts("");
    }


    return 0;
}