#include <stdio.h>
#include "NumClass.h"
int main()
{
int x;
int y;
printf("Please enter two numbers: ");
scanf("%d %d", &x, &y);
printf("You entered: number1 = %d, number2 = %d\n", x, y);

printf("Palindrome numbers in the range %d to %d: ", x, y);
    for (int i = x; i <= y; i++) {
        if (isPalindrome(i) == 1) {
            printf("%d ", i);
        }
    }
printf("\n");



printf("Armstrong numbers in the range %d to %d: ", x, y);
    for (int i = x; i <= y; i++) {
        if (isArmstrong(i) == 1) {
            printf("%d ", i);
        }
    }
printf("\n");

    
printf("Prime numbers in the range %d to %d: ", x, y);
    for (int i = x; i <= y; i++) {
        if (isPrime(i) == 1) {
            printf("%d ", i);
        }
    }
printf("\n");

    
printf("Strong numbers in the range %d to %d: ", x, y);
    for (int i = x; i <= y; i++) {
        if (isStrong(i) == 1) {
            printf("%d ", i);
        }
    }
printf("\n");
return 0;
}





