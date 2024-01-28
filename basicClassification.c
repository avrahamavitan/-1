#include "NumClass.h"
#include <stdio.h> 

int isPrime(int x){
if(x==0){return 0;}//כי אפס לא ראשוני
if(x==1||x==2){return 1;}//כי 1 ו2 נחשים ראשוניים במטלה הזו
for (int i=2;i<x;i++)
{
   if(x%i==0){return 0;}//כי אם הוא מתחלק במשהו שהוא לא אחד ועצמו אז המספר לא ארשוני
}
return 1;
}

int isStrong(int number){
   int original=number;
   int sum=0;
 while (number>0)//אני על כל ספרה בודקת מה העצרת שלה ומוסיף אותו לסכום.אם הסכןם הוא מספר ראשוני אז זה מספר חזק
 {
   int digit=number%10;
  sum+=fact1(digit);
   number=number/10;
 }
 if(original==sum){return 1;}
 else {return 0;}
 
}

int pow1(int x,int y ){//פונקצייה שמחשבת חזקה
   int number=1;
   for(int i=0;i<y;i++){
       number=number*x;
   }
   return number;
}

int number_of_digits(int x){//פונקצייה שמחשבת מספר ספרות של מספר מסויים
int number =0;
while (x>0)
{
   x=x/10;
   number+=1;
}
return number;
}

int fact1(int x){//פונקציה שמחשבת עצרת
   if(x==0||x==1){return 1;}
int num=1;
for(int i=x;i>1;i-- ){num=num*i;}
return num;
}