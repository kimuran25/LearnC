#include <stdio.h>

void main(){
    int a;
    printf("数値入力：");
    scanf("%d", &a);
    if (a==1){
        printf("a=1\n");
    }
    else if (a==2){
        printf("a=2\n");
    }
    else if (a==3){
        printf("a=3\n");
    }
    else{
        printf("不適切!\n");
    }

}