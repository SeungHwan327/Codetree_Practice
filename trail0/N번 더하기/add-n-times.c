#include <stdio.h>

int main() {
    int A,N;
    scanf("%d %d",&A,&N);

    for(int i=1; i<=N; i++) {
        printf("%d\n",A+(N*i));
    }
    return 0;
}