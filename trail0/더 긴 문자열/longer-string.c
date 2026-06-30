#include <stdio.h>
#include <string.h>

int main() {
    char str1[21], str2[21];

    scanf("%s %s",str1,str2);

    if(strlen(str1) > strlen(str2)) {
        printf("%s %d",str1,strlen(str1));
    } else if (strlen(str1) < strlen(str2)) {
        printf("%s %d",str2,strlen(str2)); 
    } else printf("same");

    return 0;
}