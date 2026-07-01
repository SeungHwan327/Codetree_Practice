#include <stdio.h>

int main() {
    int N;
    int temp = 0;
    scanf("%d",&N);

    for(int i=1; i<=100; i++) {
        temp = temp + i;
        if(temp<N) {
            continue;
        } else {
            printf("%d",i);
            break;
        }
    }

    return 0;
}