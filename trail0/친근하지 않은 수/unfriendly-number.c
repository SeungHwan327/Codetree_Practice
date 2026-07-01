#include <stdio.h>

int main() {
    int N;
    int cnt = 0;
    int arr[1000];
    scanf("%d",&N);

    for(int i=0; i<N; i++) {
        arr[i] = i+1;
    }

    for(int i=0; i<N; i++) {
        if(arr[i]%2==0 || arr[i]%3==0 || arr[i]%5==0) {
            cnt++;
        } 
    }
    
    printf("%d",N-cnt);

    return 0;
}