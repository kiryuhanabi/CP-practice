#include<stdio.h>

int main(){

    int i;

    for (i = 1; i <=10; i+=1){  //(initialization; condition; update)
        printf("%d\n",i);
    }
    printf("for loop execution is done, now the value of i is: %d",i);

    return 0;    //  initializes --> executes --> updates --> checks condition --> executes --> updates--> checks condition
}