#include <stdio.h>
int main(){
    int ch;
    scanf("%d", &ch);
    if(ch >= 'A' && ch <='Z'){
        printf("Uppercase\n");
    }
    else if (ch >= 'a' && ch <= 'z'){
        printf("Lowercase\n");
    }
    else {
        Printf ("Not an alphabet\n");
    }
    return 0;
    
}