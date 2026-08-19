#include <stdio.h>

void Print_Rec(int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            printf("1");
        }
        puts("");
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    Print_Rec(n,m);
    
    return 0;
}