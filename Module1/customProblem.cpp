#include<stdio.h>
int main(){
    int l1,r1,l2,r2;
    scanf("%d %d %d %d",&l1,&r1,&l2,&r2);
    if (l1>r1){
        int temp = r1;
        r1 = l1;
        l1 = temp;
    }
    if (l2>r2){
        int temp1 = r2;
        r2 = l2;
        l2 = temp1;
    }
    if (r1>l2 || l1<r2){
        printf("Intersects");
    }else{
        printf("Doesn't Intersect");
    }
    return 0;
}