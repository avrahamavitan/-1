#include "NumClass.h"  
#include <stdio.h>

int isArmstrong(int number) {
    int num_of_digits = number_of_digits(number);
    int sum = ArmstrongRec(number, num_of_digits);
    return (sum == number);
}

int ArmstrongRec(int num, int numOFdig) {
    if (num == 0) {
        return 0;
    }
    int lastD = num % 10;
    int sum = pow1(lastD, numOFdig); 
    return sum + ArmstrongRec(num / 10, numOFdig);
}


int isPalindrome(int number) {

    if( isPalindromeRecursive(number, number)==1){return 1;}
    else {return 0;}
}
int isPalindromeRecursive(int originalNum, int currentNum) {
    if (currentNum == 0) {
        return 1;
    }
    if (currentNum % 10 != originalNum % 10) {
        return 0;
    }
    return isPalindromeRecursive(originalNum / 10, currentNum / 10);
}



