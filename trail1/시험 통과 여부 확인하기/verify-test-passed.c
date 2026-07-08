#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    if(N>=80) printf("pass\n");
    else printf("%d more score\n",80-N);
    return 0;
}