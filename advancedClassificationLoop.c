#include "NumClass.h"
#include <stdio.h>

int isArmstrong(int number){//מחשב מספר ארמסטרונג ע"י מעבר על כל הספרות וכל פעם מחשב את הספרה בחזקת מספר הספרות.אם הסכום שווה למספר עצמו אז זה מספר ארמסטרונג
    int original=number;
   int sum=0;
   int num_of_digits=number_of_digits(number);

 while (number>0)
 {
   int digit=original%10;
   sum+=pow1(digit,num_of_digits);
   number=number/10;
 }
 if(original==sum){return 1;}
 else return 0;
 
}

int isPalindrome(int number){//כל פעם בודק את שתי הספרות הקיצוניות.אם הן תמיד שוות אז זה פולינדרום
int numD=number_of_digits(number);
if(numD==1){return 1;}
for (int i=0;i<numD/2;i++){
if (((number/pow1(10,numD-i-1))%10!=((number/pow1(10,i))%10))){return 0;}
}
return 1;
}