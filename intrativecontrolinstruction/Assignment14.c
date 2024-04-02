#include <stdio.h>
/*
Assignment-14: Use any loop
1.Write a program to calculate factorial of a number
2.Write a program to count digits in a given number
3.Write a program to check whether a given number is a Prime number or not
4.Write a program to calculate LCM of two numbers
5.Write a program to reverse a given number
*/

void program1(){
    int n,factorial=1,orignalnum;
    printf("Enter number to calculate factorial ");
    scanf("%d",&n);
    orignalnum=n;
    while(n!=0){
    factorial*=n;
    n--;
    }
    printf("factorial of %d is = %d",orignalnum,factorial);
}
void program2(){
    int n,count=0;
    printf("Enter number to count number of digit ");
    scanf("%d",&n);
    while(n/10!=0)
    {
    count++;
    n=n/10;
    }
    printf("digit count is %d",count+1);
}
void program3(){
    int n,count=0,loopn=1;
    printf("Enter number to check prime or not ");
    scanf("%d",&n);
   if (n==1){
    printf("\nNot a prime Number");
    return;
   }
   if (n==2){
    printf("\nprime Number");
    return;
   }
   while (loopn<=n)
   {
    if(n%loopn==0)
    {
        count++;
        if(count>2){
            break;
        }
    }
   loopn++;
   }
   if(count<=2){
    printf("Prime Number");
   }
   else{
    printf("Not a Prime Number");
   }
}
void program4(){

}
void program5(){
int n,reversenum=0,ocount=0,rcount=0,orginalnum=0,reversenumorginal=0;
printf("Enter number");
scanf("%d",&n);
orginalnum=n;
while(n/10!=0)
{
  reversenum+=n%10;
  reversenum*=10;
  n=n/10;
}
reversenum+=n;
printf("reverse number without zero is %d\n",reversenum);
printf("%d\n",reversenum);
reversenumorginal=reversenum;
while (orginalnum/10!=0)
{
  ocount++;
  orginalnum/=10;
}
while (reversenum/10!=0)
{
  rcount++;
  reversenum/=10;
}
int digitdiff=ocount+1-(rcount+1);
printf("reverse number with zero is \n");
while (digitdiff!=0)
{
   printf("0");
   digitdiff--;
}
printf("%d\n",reversenumorginal);
// printf("number digit=%d and reverse number digit=%d and digit diff=%d",ocount+1,rcount+1,digitdiff);
}
int main(){
    // program1();
    // program2(); 
    // program3();
    // program4();
    program5();
   
    return 0;
}