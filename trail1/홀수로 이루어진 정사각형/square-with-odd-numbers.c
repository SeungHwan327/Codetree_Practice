#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    for(int i=0; i<(2*N); i+=2) {
        for(int j=1; j<=2*N; j+=2) {
            printf("%d ",(j+10)+i);
        }
        puts("");
    }
    return 0;
}