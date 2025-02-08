//https://atcoder.jp/contests/abc149/tasks/abc149_b
#include<stdio.h>
int main(){
    long long a,b,k;
    scanf("%ld%ld%ld",&a,&b,&k);
    if (k>=(a+b)){
        long long a = 0;
        long long b = 0;
        printf("%ld %ld\n",a,b);
    }
    else if(k<a){
        long long a = a-k;
        printf("%ld %ld\n",a,b);
    }
    else if (k==a){
        long long a = 0;
        printf("%ld %ld\n",a,b);
    }
    else{
        long long b = b - (k-a);
        long long a = 0;
        printf("%ld %ld\n",a,b);
    }
}
/*#include <stdio.h>
int main(){
    long long a,b,k;
    scanf("%lld %lld %lld",&a,&b,&k);
    if (k>=a+b){
        printf("0 0\n");
    }
    else if(k<=a){
        long long rem = a-k;
        printf("%lld %lld\n",rem,b);
    }
    else{
        long long demand = k - a;
        b -=demand;
        printf("%lld %lld\n",0,b);
    }
    return 0;
}*/