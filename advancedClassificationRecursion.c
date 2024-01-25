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

    if( isPalindromeRecursive(number, number,0)==1){return 1;}
    else {return 0;}
}
int isPalindromeRecursive(int num, int originalNum, int reversedNum) {
    if (num == 0) {
        if (reversedNum==originalNum){return 1;}
        else return 0;
    }
 int digit = num % 10;
    reversedNum = reversedNum * 10 + digit;

    // המשך הרקורסיה על הספרה הבאה
    return isPalindromeRecursive(num / 10, originalNum, reversedNum);
}



