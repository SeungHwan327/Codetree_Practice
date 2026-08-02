#include <stdio.h>

int main() {
    int N,cnt=0;
    scanf("%d",&N);

    while(1) {
        if(N==1) break;
        if(N%2==0) {
            N/=2;
        } else {
            N=(N*3)+1;
        }
       cnt++;
    }

    printf("%d",cnt);
    
    return 0;
}