 #include <stdio.h>
 int main(){
    int num;
    scanf("%d",&num);
    int div3 = (num %3 ==0);
    int div5 = (num %5 ==0);
    switch(div3  + div5*5){
        case 3:
            printf("Divisible by Both\n");
            break;
        case 2:
            printf("Divisible by 5\n");
            break;
        case 1:
            printf("Divisible by 3\n");
            break;
        default:
            printf("Not Divisible\n");

        return 0;
    }
 }