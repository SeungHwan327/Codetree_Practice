#include <stdio.h>

int main() {
    int A,B,C,D;
    scanf("%d %d",&A,&B);
    scanf("%d %d",&C,&D);

    if(A>C&&B>D) printf("1");
    else printf("0");
    return 0;
}