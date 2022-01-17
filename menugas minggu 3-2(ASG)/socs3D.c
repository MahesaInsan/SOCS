#include <stdio.h>

int main(){

    long long int A, B, C, D;
    int i;

    for(i = 1; i <= 2; i++){

        scanf("(%lld+%lld)x(%lld-%lld)", &A, &B, &C, &D);
        getchar();
        printf("%lld ", (A+B)*(C-D));

    }

    scanf("(%lld+%lld)x(%lld-%lld)", &A, &B, &C, &D);
    printf("%lld\n", (A+B)*(C-D));

}