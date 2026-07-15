#include <stdio.h>

int main() {
    int N,A=0;
    scanf("%d %d",&A,&N);

    for(int i=0; i<N; i++) {
        A+=N;
        printf("%d\n",A);
    }
    return 0;
}