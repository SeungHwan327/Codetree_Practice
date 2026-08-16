#include <stdio.h>

int main() {
    int N,a=65;
    scanf("%d",&N);

    for(int i=0; i<N; i++) {
        for(int j=0; j<i+1; j++) {
            if(a==91) {
                a=65;
            }
            printf("%c",a);
            a++;
        }
        puts("");
    }

    return 0;
}