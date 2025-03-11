#include <stdio.h>

/*
    Split the given integer n into tens and ones
*/
int splitDigits (int n, int *tens, int *ones) 

//todo
int sumAndAvg(double d1, double d2, double *sum, double *avg);

int main(void) {
    int n = 42;
    int tens = 0;
    int ones = 0;

    splitDigits(n, &tens, &ones);

    printf("%d is %d tens and %d ones\n", n , tens, ones);
    
    return 0;
}


int splitDigits (int n, int *tens, int *ones) {
    if (n < 10 || n > 99){
        // Incorrect value of n
        return 1;
    }
    *tens = n / 10;
    *ones = n % 10;

    return 0;
}