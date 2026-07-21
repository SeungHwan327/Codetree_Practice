#include <stdio.h>

int main() {
    int N,sum=0;
    scanf("%d",&N);

    for(int i=N; i<=100; i++) {
        sum +=i;
    }

    printf("%d",sum);
    return 0;
}