#include <stdio.h>

int main() {
    int A,B;
    scanf("%d %d",&A,&B);

    while(A<=B) {
        printf("%d ",A);
        if(A%2==1) {
            A *= 2;
        } else if (A%2==0) {
            A += 3;
        }
    }
    return 0;
}