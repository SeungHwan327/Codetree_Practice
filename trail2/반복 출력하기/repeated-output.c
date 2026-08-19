#include <stdio.h>

void Print_Vary(int n) {
    for(int i=0; i<n; i++) {
        printf("12345^&*()_");
        puts("");
    }
}

int main() {
    int row_num;
    scanf("%d", &row_num);

    Print_Vary(row_num);

    return 0;
}