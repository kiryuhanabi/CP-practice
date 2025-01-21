#include<stdio.h>

int main(){
    int a=10;
    int b = a++; //assigns a first then incremets a, so b=a=10 and a=11//
    int c=10;
    int d =++c;//increments c first then assigns c into d, c+1=11, d=c=11//
    printf("%d\n%d",b,d);
    return 0;
}