#include <stdio.h>

int main() {
    int A,B,cnt=0;
    scanf("%d %d",&A,&B);

    for(int i=A; i<=B; i++) {
        if(1920%i==0 && 2880%i==0) {
            printf("1");
            break;
        }
        cnt++;
        if(cnt==(B-A)+1) {
            printf("0");
        }
    }
    return 0;
}