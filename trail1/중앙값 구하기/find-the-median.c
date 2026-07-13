#include <stdio.h>

int main() {
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);

    if(A>=B) {
        if(B>=C) printf("%d",B);
        else if(A>=C) printf("%d",C);
        else if(C>=A) printf("%d",A);
    } else if(B>=A) {
        if(A>=C) printf("%d",A);
        else if(B>=C) printf("%d",C);
        else if(C>=B) printf("%d",B);
    }
    return 0;
}

