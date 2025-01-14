#include<stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    int y = x-((x/10)*10);
    x = x/10;
    int z = x-((x/10)*10);
    printf("K%d%d",z,y);
    return 0;
}