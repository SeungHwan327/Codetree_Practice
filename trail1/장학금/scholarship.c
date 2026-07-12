#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d",&n,&m);

    if(n>=90 && m>=95 && m<=100) printf("100000");
    else if(n>=90 && m>=90 && m<95) printf("50000");
    else printf("0");
    
    return 0;
}