#include <stdio.h>

int main() {
    int A,B,C,D;
    scanf("%d %d",&A,&B);
    scanf("%d %d",&C,&D);

    if(A>C) printf("A");
    else if (A==C && B>D) printf("A");
    else if (A==C && B<D) printf("B");
    else printf("B");

    return 0;
}