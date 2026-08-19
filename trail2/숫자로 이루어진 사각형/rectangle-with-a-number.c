#include <stdio.h>

void Print_Rec(int N) {
    int cnt=1;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(cnt==10) {
                cnt=1;
            }
            printf("%d ",cnt);
            cnt++;
        }
        puts("");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    
    Print_Rec(N);

    return 0;
}