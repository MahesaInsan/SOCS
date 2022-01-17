#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    double y, x;

    scanf("%lf %lf", &x, &y);

    for(i = 1; i <= 3; i++){

        x = x + (x*y/100);

    }

    printf("%.2f\n",x);

}