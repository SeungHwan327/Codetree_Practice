#include <stdio.h>

int main() {
    char a;
    int cnt=0;
    char str[5][10] = {"apple", "banana", "grape", "blueberry", "orange"};

    scanf("%c",&a);

    for(int i=0; i<5; i++) {
        if(str[i][2]==a || str[i][3]==a) {
            printf("%s\n",str[i]);
            cnt++;
        }
    }

    printf("%d",cnt);

    return 0;
}