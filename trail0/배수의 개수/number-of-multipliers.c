#include <stdio.h>

int main() {
    int arr[10];
    int cnt1=0; 
    int cnt2=0;
    for(int i=0; i<10; i++) {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<10; i++) {
        if(arr[i]%3==0) {
            cnt1++;
        } 
        if(arr[i]%5==0) {
            cnt2++;
        }
    }

    printf("%d %d",cnt1,cnt2);

    return 0;
}