#include <stdio.h>

int main() {
    int N, n;
    scanf("%d",&N);
    
    n = N;

    for(int i=0; i<=100-n; i++) {
        if(N==101) {
            return 0;
        } else if(N>=90) {
            printf("A ");
        } else if(N>=80) {
            printf("B ");
        } else if(N>=70) {
            printf("C ");
        } else if(N>=60) {
            printf("D ");
        } else {
            printf("F ");
        }
        N++;
    }

    return 0;
}