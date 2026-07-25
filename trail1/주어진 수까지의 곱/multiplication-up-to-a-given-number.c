#include <stdio.h>

int main() {
    int A,B,prod=1;
    scanf("%d %d",&A,&B);

    for(int i=A; i<=B; i++) {
        prod *= i;
    }

    printf("%d",prod);

    return 0; 
}