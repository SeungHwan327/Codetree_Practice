#include <stdio.h>

int main() {
    int A,B;
    scanf("%d %d",&B,&A);

    for(int i=B; i>=A; i-=2) {
        printf("%d ",i);
    }

    return 0;
}