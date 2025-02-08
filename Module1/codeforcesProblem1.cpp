//https://codeforces.com/problemset/problem/4/A

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if (n%2==1 || n==2){
        printf("NO");
    }
    else{
        printf("YES");
    }
}