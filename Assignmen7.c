#include <stdio.h>
//1. Write a program to check whether a given number is positive or non negative. 
void Program1(){
    int number ;
    printf("Enter a number");
    scanf("%d",&number);

    if (number>0)
        printf("positive");
    else
       printf("non negative"); 
}
//2. Write a program to check whether a given number is dividible by 5 or not.

void Program2(){
    int number;
    printf("enter number");
    scanf("%d",&number);
    if(number%5==0)
    printf("divisible");
    else
    printf("not divisible");
}

void Program3(){
    int number;
    printf("enter number");
    scanf("%d",&number);
    if(number%2==0)
    printf("even");
    else
    printf("odd");
}
void Program4(){
    int number;
    printf("enter number");
    scanf("%d",&number);
    if(number==number/2*2)
    printf("even");
    else
    printf("odd");
    //x&1
}

void Program5(){
    int number;
    printf("enter number");
    scanf("%d",&number);
    if(number&1)
    printf("even");
    else
    printf("odd");
}


int main(){

    // Program1();
    // Program2();
    //Program3();
    Program4();
    return 0;
}