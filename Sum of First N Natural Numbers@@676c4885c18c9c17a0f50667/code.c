#include <stdio.h>
int main(){
    int a, sum;
    scanf("%d", &a);
    for(int i=1; i<=a;i++){
        sum += i;
        printf("%d",i);
    }
    
    return 0;
}