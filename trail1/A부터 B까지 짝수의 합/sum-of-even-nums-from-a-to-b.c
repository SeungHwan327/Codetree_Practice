#include <stdio.h>

int main() {
    int A,B,sum=0;
    scanf("%d %d",&A,&B);

    for(int i=A; i<=B; i++) {
        if(i%2==0) sum+=i;
    } 

    printf("%d",sum);
    return 0;
}