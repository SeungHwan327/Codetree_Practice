#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d",&A,&B);

    printf("%d ",A);
    while(1) {
        if ((A*2>B) && (A%2==1)) {
            break;
        } else if ((A+3>B) && (A%2!=1)){
            break;
        } else if(A%2==1) {
            printf("%d ",A*2);
            A *= 2;
        } else if (A%2!=1){
            printf("%d ",A+3);
            A += 3;
        }
    }
    return 0;
}