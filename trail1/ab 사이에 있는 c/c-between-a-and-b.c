#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int i=1; 
    while(1) {
        if(a<=c*i && b>=c*i) {
            printf("YES");
            break;
        } else if (b<c*i) {
            printf("NO");
            break;
        }
        i++;
    }

    

    return 0;
}