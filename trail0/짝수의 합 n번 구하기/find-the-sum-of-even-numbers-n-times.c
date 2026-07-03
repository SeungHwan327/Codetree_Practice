#include <stdio.h>

int main() {
    int N,a,b;
    int sum;
    scanf("%d",&N);

    for(int i=0; i<N; i++) {
        sum=0;
        scanf("%d %d",&a,&b);
        if(a%2==0) {
            for(int j=a; j<=b; j+=2) {
                sum += j;
            }
        } else if (a%2==1) {
            for(int j=a+1; j<=b; j+=2) {
                sum += j;
            }
        }
        printf("%d\n",sum);
    }

    return 0;
}