#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;
    scanf("%d",&N);

    bool satisfied = true;
    for(int i=2; i<N; i++) {
        if(N%i==0) {
            satisfied = false;
        }
    }

    if(satisfied==true) {
        printf("P");
    } else {
        printf("C");
    }
    
    return 0;
}