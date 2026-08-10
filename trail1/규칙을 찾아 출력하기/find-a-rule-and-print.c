#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(i>0 && i<N-1 && j>0 && j<N-1) {
                if(i==j+2 || i==j+1 || i==j+3 || i==j+4 ||
                   i==j+5 || i==j+6 || i==j+7 ) {
                    printf("* ");
                    continue;
                }
                printf("  ");
                continue;
            } 
            
            printf("* ");
        }

        puts("");
    }
    return 0;
}