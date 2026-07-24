#include <stdio.h>

int main() {
    int A,B,sum=0;
    scanf("%d %d",&A,&B);

    if(A<=B) {
        for(int i=A; i<=B; i++) {
            if(i%5==0) sum+=i;
        }
    } else {
        for(int i=B; i<=A; i++) {
            if(i%5==0) sum+=i;
        }
    }
    
    printf("%d",sum);

    return 0;
}