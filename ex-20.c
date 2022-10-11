// C Program to Print Prime Numbers From 1 to 100
#include <stdio.h>
int main(){
    int i, num, count;

    // Checking for prime numbers
    for (num = 1; num <= 100; num++){
        count = 0;
        for (i = 2; i <= num/2; i++){
            if (num % i == 0){
                count++;
                break;
            }
        }

        // Checking and Printing Prime Numbers
        if (count == 0 && num != 1){
            printf("%d \n", num);
        }
    }
    return 0;
}
