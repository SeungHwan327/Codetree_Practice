#include <stdio.h>

int main() {
    int gender, age;
    scanf("%d",&gender);
    scanf("%d",&age);

    if(gender == 0) {
        if(age>=19) printf("MAN");
        else printf("BOY");
    } else {
        if(age>=19) printf("WOMAN");
        else printf("GIRL");
    }
    
    return 0;
}