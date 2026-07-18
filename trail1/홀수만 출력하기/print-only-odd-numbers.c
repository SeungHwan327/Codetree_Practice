#include <stdio.h>

int main() {
    int N,a;
    int arr[101];
    scanf("%d",&N);

    for(int i=0; i<N; i++) {
        scanf("%d",&a);
        if(a%2==1 && a%3==0) printf("%d\n",a);
    }
    return 0;
}