#include <stdio.h>

int main() {
    int A,B,C,D,E;
    scanf("%d",&A);
    scanf("%d %d %d %d",&B,&C,&D,&E);

    printf("%d\n",A>B);
    printf("%d\n",A>C);
    printf("%d\n",A>D);
    printf("%d\n",A>E);

    return 0;
}