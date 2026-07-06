#include <stdio.h>

int main() {
    int a=1,b=2,c=3;
    int total=a+b+c;

    a=total;
    b=total;
    c=total;

    printf("%d %d %d",a,b,c); 
    return 0;
}