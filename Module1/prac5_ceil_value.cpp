#include<stdio.h>

int main(){
    int a=12,b=5;
    int ans = (a/b)+!!(a%b);
    printf("%d",ans);
    return 0;
}//check prac4_binary_operator for context !!(a%b)