#include <stdio.h>

int main() {
    int A,B;
    scanf("%d %d",&A,&B);

    for(int i=0; i<=B-A; i++) {
        printf("%d ",B-i);
    }
    return 0;
}