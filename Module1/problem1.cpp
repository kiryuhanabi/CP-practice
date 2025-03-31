//https://lightoj.com/problem/greetings-from-lightoj\


/*#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){     //
        int a,b;
        scanf("%d %d", &a, &b);
        int sum = a+b;
        printf("%d",sum);
    
    } return 0;
}*/


#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    int tc = 1;
    while(t--){     //
        int a,b;
        scanf("%d %d", &a, &b);
        int sum = a+b;
        printf("Case %d: %d",tc++,sum);
    
    } return 0;
}






