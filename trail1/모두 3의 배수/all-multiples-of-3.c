#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;
    bool satisfied = true;

    for(int i=0; i<5; i++) {
        scanf("%d",&N);
        if(N%3!=0) {
            satisfied=false;
        }
    }

    if(satisfied==true) {
        printf("1");
    } else {
        printf("0");
    }
    
    return 0;
}