/*#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for (int j=1; j<=n; j++ ){
            printf("(%d,%d)",i,j);
        }
        printf("\n");   //run to see how the value for i and j changes
    }
    return 0;
}*/


#include <stdio.h>

int main(){
    
    for (int i=1;i<=5;i++){
        for(int j=1;j<=10;j++){
            int mul = i*j;
            printf("%d x %d = %d\n",i,j,mul);    //multiplication table from 1 to 5
        }
        printf("------------\n");
    }
    return 0;
}