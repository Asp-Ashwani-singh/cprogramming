#include <stdio.h>
//1. Write a program to calculate size of a character constant.
void Program1(){
printf("%d",sizeof('A'));
}
//2. Write a program to calculate size of a real constant.
void Program2(){
printf("%d",sizeof(2.5));
}
//3.Write a program with one char type variable. Assign 'A' in the variable. Now change the value of variable from 'A' to 'B' using increment operator.
void Program3(){
char a='A';
a++;
printf("%c",a);
}
//4. Write a program to swap values of two int variables
void Program4(){
int a=10 ,b=90,c;
printf("before swapping value a=%d b=%d\n",a,b);
c=a;
a=b;
b=c;
printf("after swapping value a=%d b=%d",a,b);
}
//5. Write a program to swap values of two int variables without using a third variable.
void Program5(){
int a=10 ,b=90;
printf("before swapping value a=%d b=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("after swapping value a=%d b=%d",a,b);
}
//6. Write a program to swap values of two int variables without using third variable and without using +, - operators.
void Program6(){
int a=10 ,b=90;
printf("before swapping value a=%d b=%d\n",a,b);
a=a*b;
b=a/b;
a=a/b;
printf("after swapping value a=%d b=%d",a,b);
}
//7. Write a program to swap values of two int variables without using third variable and arithmetic operators.
void Program7(){
int a=10 ,b=90;
printf("before swapping value a=%d b=%d\n",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("after swapping value a=%d b=%d",a,b);
}
//8. Write a program to swap values of two int variables in single line arithmetic expression. 
void Program8()
{
int a=10 ,b=90;
printf("before swapping value a=%d b=%d\n",a,b);
a=(a*b)/(b=a);
printf("after swapping value a=%d b=%d",a,b);
}


int main(){
    // Program1();
    // Program2();
    // Program3();
    //Program4();
    //Program5();
    //Program6();
    //Program7();
     Program8();
    return 0;
}