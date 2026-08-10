#include <stdio.h>

int main() {
    int A,B;
    scanf("%d %d",&A,&B);

    for(int i=1; i<=A; i++) {
        for(int j=0; j<B; j++) {
            printf("%d ",(j+1)*i);
        }
        puts("");
    }
    return 0;
}