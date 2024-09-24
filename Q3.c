#include <stdio.h>

int main() {
    int a,sum,lsd, fsd; 
   
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a < 0) {
       a= -a; 
    }

    lsd = a % 10;

    while (a >= 10) {
        a /= 10; 
    }
    fsd = a; 

    sum = fsd + lsd;

    printf("Sum of the first and last digits: %d\n", sum);

    return 0;
}