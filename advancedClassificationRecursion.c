#include "NumClass.h"  
#include <stdio.h>

int isArmstrong(int number) {//השתמשתי בפונקציית עזר שמקבלת את המספר ומספר הספרות ומחזירה מספר .אם המספר שווה למספר שקיבלתי אז זה מספר ארמסטרונג.
    int num_of_digits = number_of_digits(number);
    int sum = ArmstrongRec(number, num_of_digits);
    return (sum == number);
}

int ArmstrongRec(int num, int numOFdig) {//פונקציית העזר כל פעם לוקחת את הספרה האחרונה ומחשבת אותה בחזקת מספר הספרות ומחזירה את הסכום.וכל פעם אני קורא לפונקצייה אחרי שהורדתי את הספרה האחרונה
    if (num == 0) {
        return 0;
    }
    int lastD = num % 10;
    int sum = pow1(lastD, numOFdig); 
    return sum + ArmstrongRec(num / 10, numOFdig);
}


int isPalindrome(int number) {//השתמשתי בפונקציית עזר.אם הפונקצייה החזירה 1 אז זה פולינדרום

    if( isPalindromeRecursive(number, number,0)==1){return 1;}
    else {return 0;}
}
int isPalindromeRecursive(int num, int originalNum, int reversedNum) {//הפונקציה מחשבת את המספר הפוך ובודקת אם הוא שווה למספר המקורי
    if (num == 0) {
        if (reversedNum==originalNum){return 1;}
        else return 0;
    }
 int digit = num % 10;
    reversedNum = reversedNum * 10 + digit;

    // המשך הרקורסיה על הספרה הבאה
    return isPalindromeRecursive(num / 10, originalNum, reversedNum);
}



