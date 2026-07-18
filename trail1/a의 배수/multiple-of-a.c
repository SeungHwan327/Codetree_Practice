#include <stdio.h>

int main() {
    int N,a;
    scanf("%d %d",&N,&a);

    for(int i=1; i<=N; i++) {
        if(i%a==0) printf("1\n");
        else printf("0\n");  
    }
    return 0;
}