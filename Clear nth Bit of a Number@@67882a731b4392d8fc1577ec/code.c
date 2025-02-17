#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int c =(a|(1<<b))?1 : 0;
    printf("%d\n",c);
    
    return 0;
}

