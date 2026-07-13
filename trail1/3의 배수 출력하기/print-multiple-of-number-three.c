#include <stdio.h>

int main() {
    int N, i=3;
    scanf("%d",&N);

    while(N>=i) {
        printf("%d ",i);
        i+=3;
    }
    return 0;
}