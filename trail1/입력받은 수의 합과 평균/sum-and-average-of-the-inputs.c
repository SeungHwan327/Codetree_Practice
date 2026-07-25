#include <stdio.h>

int main() {
    int N,a;
    int sum=0,cnt=0;
    float avg=0;

    scanf("%d",&N);
    for(int i=0; i<N; i++) {
        scanf("%d",&a);
        sum+=a;
        cnt++;
    }

    avg=(float)sum/cnt;
    printf("%d %.1lf",sum,avg);
    return 0;
}