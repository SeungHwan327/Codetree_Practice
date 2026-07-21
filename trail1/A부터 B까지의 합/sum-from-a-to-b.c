#include <stdio.h>

int main() {
    int A,B,sum=0;
    scanf("%d %d",&A,&B);

    for(int i=A; i<=B; i++) {
        sum += i;
    }
    printf("%d",sum);
    return 0;
}