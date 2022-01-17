#include <stdio.h>

int main(){

    long long int A, B, C = 0;
    int i;

    scanf("%lld %lld", &A, &B);

    for(i = A; i<= B; i++){

        C += i;

    }

    printf("%lld\n", C);

}