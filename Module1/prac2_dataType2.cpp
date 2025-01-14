#include<stdio.h>

int main(){
    int x = 235;
    int y = x-( (x/10)*10); // (x/10)=23, (x/10)*10 = 230//
    printf("%d\n",y);
    x = x/10;// now the number becomes 23//
    int z = x-((x/10)*10);
    printf("%d%d",z,y);
    return 0;

}