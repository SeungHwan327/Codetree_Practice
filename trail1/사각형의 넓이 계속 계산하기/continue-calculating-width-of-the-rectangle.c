#include <stdio.h>

int main() {
    int a,b;
    char alp;

    while(1) {
        scanf("%d %d %c",&a,&b,&alp);
        printf("%d\n",a*b);
        if(alp=='C') {
            break;
        }
    }
    return 0;
}