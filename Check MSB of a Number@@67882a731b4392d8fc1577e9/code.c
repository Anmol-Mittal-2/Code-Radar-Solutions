#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int msb_mask = 1 << 31;
    if (n & msb_mask)
        printf("Set\n");     
    else
        printf("Not Set\n"); 

    return 0;
}