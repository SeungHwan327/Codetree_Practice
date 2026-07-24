#include <stdio.h>

int main() {
    int n,a;
    int sum=0;
    scanf("%d",&n);

    for(int i=0; i<n; i++) {
        scanf("%d",&a);
        if(a%2==1 && a%3==0) sum+=a;
    }

    printf("%d",sum);
    return 0;
}