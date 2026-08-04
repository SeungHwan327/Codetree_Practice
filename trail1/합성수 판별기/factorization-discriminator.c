#include <stdio.h>

int main() {
    int N,cnt=0;
    scanf("%d",&N);

    for(int i=2; i<=N; i++) {
        if(N==2) {
            printf("N");
            break;
        }
        if(N%i==0) {
            printf("C");
            break;
        } 
        cnt++;
        if(cnt==N-2) {
            printf("N");
            break;
        }
    }


    return 0;
}