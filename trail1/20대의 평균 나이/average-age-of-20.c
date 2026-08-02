#include <stdio.h>

int main() {
    int age;
    int sum=0,cnt=0;

    while(1) {
        scanf("%d",&age);
        if(age>=20 && age<30) {
            sum+=age;
            cnt++;
        } else {
            break;
        }
    }

    printf("%.2lf",(float)sum/cnt);
    return 0;
}