#include<stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    int y = x %100;
    printf("K%02d",y);//%02d for printing the 2 digit together//
    return 0;
}