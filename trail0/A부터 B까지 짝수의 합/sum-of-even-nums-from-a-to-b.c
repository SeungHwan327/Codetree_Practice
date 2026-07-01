#include <stdio.h>

int main() {
    int A,B;
    int sum=0;
    scanf("%d %d",&A,&B);

    for(int i=0; i<=B-A; i++) {
        if((A+i)%2==0) {
            sum += A+i;
        }
    }

    printf("%d",sum);

    return 0;
}