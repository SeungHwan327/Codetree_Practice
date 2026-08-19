#include <stdio.h>

void Print_Max(int n, int m);

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    Print_Max(n,m);
    
    return 0;
}

void Print_Max(int n, int m) {
    int max;
    if(n<m) {
        for(int i=1; i<=m; i++) {
            if(n%i==0 &&m%i==0) {
                max=i;
            }
        }
    } else {
        for(int i=1; i<=n; i++) {
            if(n%i==0 &&m%i==0) {
                max=i;
            }
        }
    }
    printf("%d",max);
}
    
