/* will return if a number is Armstrong number
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
For Example: 407 = 43 + 03 + 73 = 64 + 0 + 343 = 407
*/
int isArmstrong(int number);
/* will return if a number is a palindrome */
int isPalindrome(int number);
/* will return if a number is prime*/
int isPrime(int number);
/*Strong number is a special number whose sum of the factorial of digits is equal to the original
number. For Example: 145 is strong number
1! + 4! + 5! = 145
*/
int isStrong(int number);

int pow1(int x,int y);

int number_of_digits(int number);

int fact1(int number);

int ArmstrongRec(int num,int numOFdig);

int isPalindromeRecursive(int originalNum, int currentNum);