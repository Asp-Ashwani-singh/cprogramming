#include <stdio.h>
//1. Write a program to input a three digit number and display the sum of the digits.

void Program1(){
    int number,sum=0,last;
    printf("Enter three digit Number");
    scanf("%d",&number);
    while (number!=0)
    {
        last=number%10;
        sum+=last;
        number/=10;
    }
    printf("%d",sum);
}
//2. Write a program to find ASCII code of the character '+'

void Program2(){
    char a='+';
    printf("%d",a);
}

//3.Write a program to print size of an int, a float, a char and a double type variable
void Program3(){
    
    printf("%d ",sizeof(int));
     printf("%d ",sizeof(float));
      printf("%d ",sizeof(char));
       printf("%d ",sizeof(double));
}
//4. Write a program to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)
void Program4(){
    int x=2345,last;
    last=x%10;
    printf("%d",x-last);
}
//5. Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and digit=9 then the resulting number is 2349)

void Program5(){
    int number,dnumber,digit,zeros=1,finalnumber;
    printf("Enter number and digit");
    scanf("%d%d",&number,&digit);
    dnumber=number;
    while(number!=0){
    zeros=zeros*10;
    number/=10;
   }
   finalnumber=(dnumber*zeros)/10+digit;
   printf("%d\n",finalnumber);

}

int main(){
// Program1();
// Program2();
// Program3();
// Program4();
Program5();
    return 0;
}
