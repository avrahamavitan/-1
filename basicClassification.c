#include "NumClass.h"
#include <stdio.h> 

int isPrime(int x){
if(x==0){return 0;}
if(x==1||x==2){return 1;}
for (int i=2;i<x;i++)
{
   if(x%i==0){return 0;}
}
return 1;
}

int isStrong(int number){
   int original=number;
   int sum=0;
 while (number>0)
 {
   int digit=number%10;
  sum+=fact1(digit);
   number=number/10;
 }
 if(original==sum){return 1;}
 else {return 0;}
 
}

int pow1(int x,int y ){
   int number=1;
   for(int i=0;i<y;i++){
       number=number*x;
   }
   return number;
}

int number_of_digits(int x){
int number =0;
while (x>0)
{
   x=x/10;
   number+=1;
}
return number;
}

int fact1(int x){
   if(x==0||x==1){return 1;}
int num=1;
for(int i=x;i>1;i-- ){num=num*i;}
return num;
}
