#include <stdio.h>

int main() {
    int N,prod=1;
    scanf("%d",&N);

    for(int i=1; i<=10; i++) {
        prod*=i;
        if(prod>=N) {
            printf("%d",i);
            break;
        }
    }
    return 0;
}