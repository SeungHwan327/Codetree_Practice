#include <stdio.h>

int result = 0;

int Print_min(int n, int m) {
    if(n>m) {
        for(int i=1; i<=100; i++) {
            if((m*i)%n==0) {
                result=m*i;
                break;
            }
        }
    } else {
        for(int i=1; i<=100; i++) {
            if((n*i)%m==0) {
                result=n*i;
                break;
            }

        }
    } 
    return result;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    Print_min(n,m);

    printf("%d",result);
    
    return 0;
}