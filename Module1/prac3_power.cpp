#include<stdio.h>
#include<math.h>//pow() is in math.h file//

int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    int ans = pow(x,y);
    printf("%d",ans);
    return 0;
}