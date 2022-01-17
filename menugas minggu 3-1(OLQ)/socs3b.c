#include <stdio.h>

int main(){
    
    int A, A1, A2, A3, B1, B2, B3;

    scanf("%d", &A);
    scanf("%d %d", &A1, &B1);
    scanf("%d %d", &A2, &B2);
    scanf("%d %d", &A3, &B3);

    printf("%d\n", (A1/B1) << B1);
    printf("%d\n", (A2/B2) << B2);
    printf("%d\n", (A3/B3) << B3);

}