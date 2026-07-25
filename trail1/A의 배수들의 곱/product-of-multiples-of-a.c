#include <stdio.h>

int main() {
    int A,B,prod=1;
    scanf("%d %d",&A,&B);

    for(int i=1; i<=B/A; i++) {
        prod *= A*i;
    }

    printf("%d",prod);
    return 0;
}