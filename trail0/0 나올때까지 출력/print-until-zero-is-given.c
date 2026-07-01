#include <stdio.h>

int main() {
    int arr[10000] = {-1,};
    int cnt=0;

    while(1) {
        scanf("%d",&arr[cnt]);
        if(arr[cnt]==0) {
            break;
        }
        cnt++;
    }

    for(int i=0; i<cnt; i++) {
        printf("%d\n",arr[i]);
    }
    

    return 0;
}