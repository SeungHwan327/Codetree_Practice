#include <stdio.h>

int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);

    a+=87;
    b%=10;

    printf("%d\n%d",a,b);

    return 0;
}