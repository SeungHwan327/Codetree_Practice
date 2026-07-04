#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);

    int arr[N][N];

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(i%2==0) {
                arr[j][i] = j+1;
            } else {
                arr[j][i] = N-j;
            }
            
        }
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            printf("%d",arr[i][j]);
        }
        puts("");
    }
    
    return 0;
}