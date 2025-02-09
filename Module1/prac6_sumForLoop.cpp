/*#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int sum = 0;
    int i;

    for(i = 1; i<=n; i++){
        sum += i;
    }
    printf("%d\n",sum);
    return 0;
}

/*declared variable can only accessable in that block and it's child block, can't be accessed from it's parent block  { parent block
                                                                                                                            {
                                                                                                                                child block
//how many numbers i had to check for the summation to reach x                                                                                                                                 }
                                                                                                                                        }  */
#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int sum = 0;
    int i;

    for(i=0;;i++){     //can also add condition before (i=0;sum>=x;i++), then we wouldn't need the if condition
        sum +=i;
        if (sum>=x){
            break;
        }
    }
    printf("%d\n",i);
    return 0;
}                                                                                                                                       