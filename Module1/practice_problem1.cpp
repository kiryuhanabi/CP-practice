//an integer number abc of 3 digits now find abc+bca+cab//
#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int c = x%10;
    int p= x/10;
    int b = p%10;
    int a = p/10;
    int y = b*100+c*10+a;
    int z = c*100+a*10+b;
    printf("%d",x+y+z);
    return 0;
}