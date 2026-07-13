#include <stdio.h>

int main() {
    char sym;
    int tem;
    int A=0;

    for(int i=0; i<3; i++) {
        scanf(" %c %d",&sym,&tem);
        if(sym=='Y' && tem>=37) A++;
    }
    
    if(A>=2) printf("E");
    else printf("N");
    
    return 0;
}