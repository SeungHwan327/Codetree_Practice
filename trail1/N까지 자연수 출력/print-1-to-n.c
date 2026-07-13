#include <stdio.h>

int main() {
    int N;
    int i=1; 
    scanf("%d",&N);

    while(N>=i) {
        printf("%d ",i);
        i++;
    }
    return 0;
}