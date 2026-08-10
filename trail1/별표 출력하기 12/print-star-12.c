#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(i>=1 && j%2==0 || j==1 && i>1 || j==3 && i>3 ||
                j==5 && i>5 || j==7 && i>7 || j==9 && i>9 ||
                 j==11 && i>11 || j==13 && i>13 || j==15 && i>15) {
                printf("  ");
                continue;
            } 
            printf("* ");
        }
        puts("");
    }
    return 0;
}