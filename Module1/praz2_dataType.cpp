// int 4 byte data  -2^31  --- (2^31) - 1 , -1 for 0//
// long long 8 byte  -2^63  --- (2^63)-1//
// 8 byte double//
// 1 byte char//

#include <stdio.h>

int main(){
    int x = 100;
    double y = 5.9;
    int sum;
    sum = x + 5;
    int z = 5;
    double div = (double)z/2; //(double) tells the compiler to think of z as a double even though z was initially declared an int, this technique is called typecasting//
    printf("Value of x :%d\nValue of y :%lf\n",x,y); //%.2lf for printing 2 digits after the decimal point//
    printf("%d\n",sum);
    printf("%.3lf",div);
    return 0;
}