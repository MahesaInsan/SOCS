#include <stdio.h>

int main(){

    float a, b, c, d, a1, b1, c1, d1, sum;
    int i;

    for(i = 1; i <= 3; i++){

        scanf("%f %f %f %f", &a, &b, &c, &d);
        a1 = (a/1)*2;
        b1 = (b/2)*4;
        c1 = (c/3)*6;
        d1 = (d/4)*4;
        sum = a1 + b1 + c1 + d1;
        printf("%.2f\n", sum);

    }


}