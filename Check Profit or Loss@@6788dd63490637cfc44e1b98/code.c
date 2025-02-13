#include <stdio.h>
int main(){
    int a ,b;
    scanf("%c %c", &a , &b);
    if(a>b){
        printf("Loss\n");
    }
    else if(a<b){
        printf("Profit\n");
    }
    else{
        printf(No Profit No Loss);
    }
    return 0;

}
