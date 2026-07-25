#include <stdio.h>

int main() {
    int N,sum=0,cnt=0;
    float avg=0;

    for(int i=0; i<10; i++) {
        scanf("%d",&N);
        if(N>=0 && N<=200) {
            sum+=N;
            cnt++;
        }
    }

    avg = (double)sum/cnt;
    printf("%d %.1lf",sum,avg);
    return 0;
}