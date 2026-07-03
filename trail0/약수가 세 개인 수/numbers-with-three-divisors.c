#include <stdio.h>

int main() {
    int start, end;
    int cnt=0;
    int ans=0;
    scanf("%d %d",&start,&end);

    for(int i=start; i<=end; i++) {
        for(int j=1; j<=i; j++) {
            if(i%j==0) {
                cnt++;
            }
        }
        if(cnt==3) {
            ans++;
        }
        cnt=0;
    }

    printf("%d",ans);
    return 0;
}