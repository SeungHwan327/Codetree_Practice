#include <stdio.h>

int main() {
    int a=0;

    while(a!=25) {
        scanf("%d",&a);
        if(a>25) printf("Lower\n");
        else if(a<25) printf("Higher\n");
    }

    printf("Good");
    return 0;
}