#include <stdio.h>

void Print_Star() {
    for(int i=0; i<10; i++) {
        printf("*");
    }
    puts("");
}

int main() {
    for(int i=0; i<5; i++) {
        Print_Star();
    }
    return 0;
}