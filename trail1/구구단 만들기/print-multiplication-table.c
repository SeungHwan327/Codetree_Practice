#include <stdio.h>

int main() {
    int A,B;
    scanf("%d %d",&A,&B);

    for(int i=0; i<9; i++) {
        for(int j=0; j<(B-A)/2+1; j++) {
            printf("%d * %d = %d",B-(j*2),i+1,(B-(j*2))*(i+1));
            if(B-(j*2)!=A) {
                printf(" / ");
            }
        }
        puts("");
    }
    return 0;
}