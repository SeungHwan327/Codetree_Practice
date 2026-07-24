#include <stdio.h>

int main() {
    int A,B;
    float sum=0,cnt=0;
    scanf("%d %d",&A,&B);

    for(int i=A; i<=B; i++) {
        if(i%5==0 || i%7==0) {
            sum+=i;
            cnt++;
        }
    }

    printf("%.0lf %.1lf",sum,sum/cnt);

    return 0;
}