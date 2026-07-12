#include <stdio.h>

int main() {
    int a_age, b_age;
    char a_gender, b_gender;
    scanf("%d %c",&a_age,&a_gender);
    scanf("%d %c",&b_age,&b_gender);

    if(a_age>=19 && a_gender=='M' || b_age>=19 && b_gender=='M') {
        printf("1");
    } else {
        printf("0");
    }
    
    return 0;
}